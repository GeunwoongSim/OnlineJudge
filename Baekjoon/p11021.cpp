#pragma warning(disable:4996)
#include <stdio.h>

int main(void) {
	int T;
	scanf("%d", &T);
	for (int t = 1; t <= T; t++) {
		int num1, num2;
		scanf("%d %d", &num1,&num2);
		printf("Case #%d: %d\n", t, num1 + num2);
	}
	return 0;
}