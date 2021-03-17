#include <cstdio>
#include <math.h>
int main(void) {
	int testcase;
	scanf("%d", &testcase);
	for (int t = 0; t < testcase; t++) {
		bool number[10] = {false,};
		long long num;
		int result = 0;
		scanf("%lld", &num);
		long long value = num;
		for (int l = 0; l < (int)log10(num) + 1; l++) {
			int ten = value % 10;
			value = value / 10;
			number[ten] = true;
		}
		for (int l = 0; l < 10; l++) {
			if (number[l])
				result++;
		}
		printf("%d\n", result);
	}
	return 0;
}