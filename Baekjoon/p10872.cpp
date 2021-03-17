#include <cstdio>
int main(void) {
	long long factorial = 1;
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		factorial = factorial * i;
	}
	printf("%lld", factorial);
	return 0;
}