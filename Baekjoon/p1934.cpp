#include <cstdio>
int sosu[45000];
bool sosu_check[45000];
void sosuCal() { //�Ҽ� ���ϱ�
	for (int i = 2; i < 1001; i++) {
		for (int l = 2; i*l < 1001; l++) {
			sosu_check[i*l] = true;
		}
	}
	int Index = 0;
	for (int i = 2; i <= 45000; i++) {
		if (!sosu_check[i])
			sosu[Index++] = i;
	}
}
int Sol(int n1, int n2) { //���м����ϱ�
	int so = sosu[0], soIndex = 0;
	while (true) {
		if (so > n1 || so > n2) {
			break;
		}
		if (n1%so == 0 && n2%so == 0) { //������ ������ -> ����
			n1 = n1 / so;
			n2 = n2 / so;
		}
		else { // ������ �������� ���� -> �Ҽ��� �ø�
			so = sosu[++soIndex];
		}
	}
	return n1;
}
int main(void) {
	sosuCal();
	int T;
	scanf("%d", &T);
	while (T--) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		printf("%d\n", n2*Sol(n1, n2));
	}
	return 0;
}