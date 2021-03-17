#include <stdio.h>

int main(void) {
	long long N, P;
	scanf("%lld %lld", &N, &P);
	long long result = 1;
	for (int i = 1; i <= N; i++) {
		result = (result * i) % P;
	}
	printf("%lld", result);
	return 0;
}