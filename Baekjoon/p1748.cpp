#include <cstdio>
#include <math.h>
int main(void) {
	long long N,sum=0,number = 9, len;
	scanf("%lld", &N);
	len = log10(N) + 1;
	for (int i = 1; i < len; i++) {
		sum += i * number;
		number *= 10;
	}
	sum +=(N - pow(10, len - 1)+1)*len;
	printf("%lld", sum);
	return 0;
}