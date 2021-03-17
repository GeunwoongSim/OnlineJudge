#include <cstdio>
int main(void) {
	long long num1, num2;
	scanf("%lld %lld", &num1, &num2);
	printf("%lld", num1 > num2 ? num1 - num2 : num2 - num1);
	return 0;
}