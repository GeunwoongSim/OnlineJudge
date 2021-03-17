#include <cstdio>
#include <math.h>

int main(void) {
	long long num1, num2;
	scanf("%lld", &num1);
	scanf("%lld", &num2);
	long long sum = 0;
	long long num = 0;
	long long start = sqrt(num1);
	if (start < sqrt(num1)) {
		start++;
	}
	for (long long i = start; i <= sqrt(num2); i++) {
		sum += i * i;
		num++;
	}
	if (num > 0) {
		printf("%lld\n%lld", sum, start*start);
	}
	else {
		printf("-1");
	}
	return 0;
}