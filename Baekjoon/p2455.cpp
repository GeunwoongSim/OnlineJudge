#include <cstdio>
int main(void) {
	int sum = 0;
	int max = 0;
	for (int i = 0; i < 4; i++) {
		int num1, num2;
		scanf("%d %d", &num1, &num2);
		sum = sum - num1;
		sum = sum + num2;
		if (max < sum) {
			max = sum;
		}
	}
	printf("%d", max);
	return 0;
}