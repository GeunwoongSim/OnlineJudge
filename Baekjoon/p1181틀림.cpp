#include <cstdio>
#include <cstring>
#include <algorithm>
#include <queue>
using namespace std;

struct node{
	char word[51];
	int len;
};

int index_[40000];
struct node list[40000];

void Sort(int val) {
	while (val != 1) {
		if (list[index_[val]].len < list[index_[val / 2]].len) { //�ڸ��ٲ�
			int temp = index_[val];
			index_[val] = index_[val / 2];
			index_[val / 2] = temp;
		}
		else if (list[index_[val]].len == list[index_[val / 2]].len) {
			if (strcmp(list[index_[val]].word, list[index_[val / 2]].word) < 0) {
				int temp = index_[val];
				index_[val] = index_[val / 2];
				index_[val / 2] = temp;
			}
		}
		else { //�ڸ� ���ٲ�
			break;
		}
		val = val / 2;
	}
}
void DSort(int val) {
	int num = 1;
	while (num < val) {
		if (index_[num * 2] != 0 && index_[num * 2 + 1] != 0) { //�ڽ� �ΰ�
			if (list[index_[num]].len > list[index_[num*2]].len && list[index_[num]].len > list[index_[num * 2+1]].len) { //���ڽ� ��� ���ڼ��� ����
				if (list[index_[num * 2]].len == list[index_[num * 2 + 1]].len) { //���ڽ��� ���ڼ��� ���� - ������
					if (strcmp(list[index_[num * 2]].word, list[index_[num * 2 + 1]].word) > 0) { //������ ������
						int temp = index_[num];
						index_[num] = index_[num * 2 + 1];
						index_[num * 2 + 1] = temp;
						num = num * 2 + 1;
					}
					else { //�������� ������
						int temp = index_[num];
						index_[num] = index_[num * 2];
						index_[num * 2] = temp;
						num = num * 2;
					}
				}
				else if (list[index_[num * 2]].len > list[index_[num * 2 + 1]].len) { //�������� ����
					int temp = index_[num];
					index_[num] = index_[num * 2 + 1];
					index_[num * 2 + 1] = temp;
					num = num * 2 + 1;
				}
				else { //������ ����
					int temp = index_[num];
					index_[num] = index_[num * 2];
					index_[num * 2] = temp;
					num = num * 2;
				}
			}
			else if (list[index_[num]].len > list[index_[num * 2]].len) { //���ʸ� ����
				int temp = index_[num];
				index_[num] = index_[num * 2];
				index_[num * 2] = temp;
				num = num * 2;
			}
			else if(list[index_[num]].len > list[index_[num * 2 + 1]].len){ //�����ʸ� ����
				int temp = index_[num];
				index_[num] = index_[num * 2 + 1];
				index_[num * 2 + 1] = temp;
				num = num * 2 + 1;
			}
			else { //�ڽĺ��� �������� - ���� ������
				if (strcmp(list[index_[num * 2]].word, list[index_[num * 2 + 1]].word) < 0) { //�ڽ��� ������ �� �տ� ����
					if (strcmp(list[index_[num]].word, list[index_[num * 2]].word) < 0) { //�θ� �� �տ�����
						//������������
						break;
					}
					else { //�θ� �ڿ����� - ���ʰ� �ٲ�
						int temp = index_[num];
						index_[num] = index_[num * 2];
						index_[num * 2] = temp;
						num = num * 2;
					}
				}
				else {//�ڽ��� �������� �� �տ� ����
					if (strcmp(list[index_[num]].word, list[index_[num * 2+1]].word) < 0) { //�θ� �� �տ�����
						//������������
						break;
					}
					else { //�θ� �ڿ����� - �����ʰ� �ٲ�
						int temp = index_[num];
						index_[num] = index_[num * 2+1];
						index_[num * 2+1] = temp;
						num = num * 2+1;
					}
				}
			}
		}
		else if(index_[num * 2] != 0){ //�ڽ� ���� �Ѱ�
			if (list[index_[num]].len > list[index_[num * 2]].len) { //������ ���̰� ���� - ���ʿø�
				int temp = index_[num];
				index_[num] = index_[num * 2];
				index_[num * 2] = temp;
				num = num * 2;
			}
			else if (list[index_[num]].len == list[index_[num * 2]].len) { //���̰� ����
				if (strcmp(list[index_[num]].word, list[index_[num * 2]].word) < 0) { //�θ� �� �տ�����
						//������������
					break;
				}
				else { //�θ� �ڿ����� - �����ʰ� �ٲ�
					int temp = index_[num];
					index_[num] = index_[num * 2];
					index_[num * 2] = temp;
					num = num * 2;
				}
			}
			else {
				break;
			}
		}
		else { //�ڽ� ����
			break;
		}
	}
}

int main(void) {
	int T,loop=1;
	scanf("%d", &T);
	for(int i=0;i<T;i++) {
		scanf("%s", list[loop].word);
		bool check = false;
		for (int l = 0; l < loop; l++) {
			if (strcmp(list[l].word, list[loop].word) == 0) {
				check = true;
			}
		}
		if (check)
			continue;
		list[loop].len = strlen(list[loop].word);
		index_[loop] = loop;
		Sort(loop);
		loop++;
	}
	while (loop != 1) {
		printf("%s\n", list[index_[1]].word);
		index_[1] = index_[loop-1];
		index_[loop-1] = 0;
		loop--;
		DSort(loop);
	}
	return 0;
}