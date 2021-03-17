#include <stdio.h>

int main(void) {
	int N, F;
	scanf("%d", &N);
	scanf("%d", &F);

	int num = N / 100;
	num = num * 100;
	int result = num % F;
	if (result != 0) {
		int add = F - result;
		num = num + add;
	}
	result = num % 100;
	if (result < 10) {
		printf("0%d", result);
	}
	else {
		printf("%d", result);
	}
	return 0;
}