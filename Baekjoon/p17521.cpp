#include <iostream>

long long Array[20];
int main(void) {
	long long n, w;
	scanf("%lld %lld", &n, &w);
	for (int i = 0; i < n; i++) {
		scanf("%d", &Array[i]);
	}
	long long coinNum = w / Array[0]; //���� ���μ�
	w = w - coinNum * Array[0]; //���� �ݾ�

	bool check = true; //��� - �϶�
	for (int i = 1; i < n; i++) {
		if (Array[i] - Array[i - 1] > 0) { //���
		   //����϶� ����� ������ ���
			if (check) {

			}
			else {//�ϰ��϶� ����� ������ ����
				coinNum = w / Array[i - 1];
				w = w - coinNum * Array[i - 1];
				check = true;

			}
		}
		else if (Array[i] - Array[i - 1] == 0) { //����

		}
		else { //�϶�
		   //����϶� �϶��� ������ �Ǹ�
			if (check) {
				w = w + coinNum * Array[i - 1];
				check = false;
			}
			else {//�϶��϶� �϶��� ������ ���

			}
		}
	}
	if (check) {
		w = w + coinNum * Array[n - 1];
	}
	printf("%lld", w);
	return 0;
}