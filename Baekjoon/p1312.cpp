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
�Ҽ��� ���Ҷ��� num1 % num2 �ϰ� �ش簪*10 ���ְ� num2�� �ٽ� ������ �Ҽ����� ���´�
*/