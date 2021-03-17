#pragma warning(disable:4996)
#include <stdio.h>
long long number[81] = { 0,1,1,2,3,5, };
int main(void) {
	for (int i = 6; i < 81; i++) {
		number[i] = number[i - 1] + number[i - 2];
	}
	int num;
	scanf("%d", &num);
	if (num == 1) {
		printf("4");
	}
	else {
		printf("%lld", number[num] * 4 + number[num - 1] * 2);
	}
	
	return 0;
}