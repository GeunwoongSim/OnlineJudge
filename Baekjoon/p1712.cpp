#include <cstdio>

int main(void) {
	long long a, b, c, n;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	long long num = c - b;
	if (num <= 0 ) { //���� ���Ҽ����°��
		printf("-1");
	}
	else { //���� ����
		n = a / num;
		if (n*num != a) {
			n++;
		}
		if (a == (c - b)*n) {
			n++;
		}
		printf("%lld", n);
	}
	return 0;
}