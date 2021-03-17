#include <stdio.h>

int main(void) {
	int num1, num2, num3;
	scanf("%d %d %d", &num1, &num2, &num3);
	int a = num1 % num2;
	int b = 0;
	for (int i = 0; i < num3; i++) {
		a = a * 10;
		b = a / num2;
		a = a % num2;
	}
	printf("%d", b);
	return 0;
}
/*
소수를 구할때는 num1 % num2 하고 해당값*10 해주고 num2로 다시 나누면 소수값이 나온다
*/