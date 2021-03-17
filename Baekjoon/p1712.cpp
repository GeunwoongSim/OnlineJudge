#include <cstdio>

int main(void) {
	long long a, b, c, n;
	scanf("%lld %lld %lld", &a, &b, &c);
	
	long long num = c - b;
	if (num <= 0 ) { //답을 구할수없는경우
		printf("-1");
	}
	else { //답이 있음
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