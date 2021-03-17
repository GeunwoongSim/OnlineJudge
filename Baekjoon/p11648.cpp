#include <cstdio>
#include <math.h>
int main(void) {
	int num,result = 0;
	scanf("%d", &num);
	while (num / 10 != 0) {
		int val = num, number = 1;
		for (int i = 0; i < (int)log10(num) + 1; i++) {
			number = number * (val % 10);
			val = val / 10;
		}
		num = number;
		result++;
	}
	printf("%d", result);
	return 0;
}