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
		if (list[index_[val]].len < list[index_[val / 2]].len) { //자리바꿈
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
		else { //자리 못바꿈
			break;
		}
		val = val / 2;
	}
}
void DSort(int val) {
	int num = 1;
	while (num < val) {
		if (index_[num * 2] != 0 && index_[num * 2 + 1] != 0) { //자식 두개
			if (list[index_[num]].len > list[index_[num*2]].len && list[index_[num]].len > list[index_[num * 2+1]].len) { //두자식 모두 글자수가 작음
				if (list[index_[num * 2]].len == list[index_[num * 2 + 1]].len) { //두자식의 글자수가 같음 - 사전순
					if (strcmp(list[index_[num * 2]].word, list[index_[num * 2 + 1]].word) > 0) { //왼쪽이 사전뒤
						int temp = index_[num];
						index_[num] = index_[num * 2 + 1];
						index_[num * 2 + 1] = temp;
						num = num * 2 + 1;
					}
					else { //오른쪽이 사전뒤
						int temp = index_[num];
						index_[num] = index_[num * 2];
						index_[num * 2] = temp;
						num = num * 2;
					}
				}
				else if (list[index_[num * 2]].len > list[index_[num * 2 + 1]].len) { //오른쪽이 작음
					int temp = index_[num];
					index_[num] = index_[num * 2 + 1];
					index_[num * 2 + 1] = temp;
					num = num * 2 + 1;
				}
				else { //왼쪽이 작음
					int temp = index_[num];
					index_[num] = index_[num * 2];
					index_[num * 2] = temp;
					num = num * 2;
				}
			}
			else if (list[index_[num]].len > list[index_[num * 2]].len) { //왼쪽만 작음
				int temp = index_[num];
				index_[num] = index_[num * 2];
				index_[num * 2] = temp;
				num = num * 2;
			}
			else if(list[index_[num]].len > list[index_[num * 2 + 1]].len){ //오른쪽만 작음
				int temp = index_[num];
				index_[num] = index_[num * 2 + 1];
				index_[num * 2 + 1] = temp;
				num = num * 2 + 1;
			}
			else { //자식보다 작지않음 - 셋중 사전순
				if (strcmp(list[index_[num * 2]].word, list[index_[num * 2 + 1]].word) < 0) { //자식중 왼쪽이 더 앞에 있음
					if (strcmp(list[index_[num]].word, list[index_[num * 2]].word) < 0) { //부모가 더 앞에있음
						//움직이지않음
						break;
					}
					else { //부모가 뒤에있음 - 왼쪽과 바꿈
						int temp = index_[num];
						index_[num] = index_[num * 2];
						index_[num * 2] = temp;
						num = num * 2;
					}
				}
				else {//자식중 오른쪽이 더 앞에 있음
					if (strcmp(list[index_[num]].word, list[index_[num * 2+1]].word) < 0) { //부모가 더 앞에있음
						//움직이지않음
						break;
					}
					else { //부모가 뒤에있음 - 오른쪽과 바꿈
						int temp = index_[num];
						index_[num] = index_[num * 2+1];
						index_[num * 2+1] = temp;
						num = num * 2+1;
					}
				}
			}
		}
		else if(index_[num * 2] != 0){ //자식 왼쪽 한개
			if (list[index_[num]].len > list[index_[num * 2]].len) { //왼쪽의 길이가 작음 - 왼쪽올림
				int temp = index_[num];
				index_[num] = index_[num * 2];
				index_[num * 2] = temp;
				num = num * 2;
			}
			else if (list[index_[num]].len == list[index_[num * 2]].len) { //길이가 같음
				if (strcmp(list[index_[num]].word, list[index_[num * 2]].word) < 0) { //부모가 더 앞에있음
						//움직이지않음
					break;
				}
				else { //부모가 뒤에있음 - 오른쪽과 바꿈
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
		else { //자식 없음
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