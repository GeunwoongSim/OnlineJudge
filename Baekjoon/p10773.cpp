#include <cstdio>
long long number[100001];
int main(void) {
	long long T,sum = 0,numberIndex=0,input;
	scanf("%lld", &T);
	while (T--) {
		scanf("%lld", &input);
		if (input == 0) {
			sum -= number[--numberIndex];
		}
		else {
			number[numberIndex++] = input;
			sum += input;
		}
	}
	printf("%lld", sum);
	return 0;
}