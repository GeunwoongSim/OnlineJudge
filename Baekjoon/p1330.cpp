#include <stdio.h>

int main(void) {
	int num1, num2;
	scanf("%d %d", &num1, &num2);
	int result = num1 - num2;
	if (result == 0) {
		printf("==");
	}
	else if (result > 0) {
		printf(">");
	}
	else {
		printf("<");
	}
	return 0;
}