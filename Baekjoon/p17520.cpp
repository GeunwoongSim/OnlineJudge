#include <cstdio>
#include <math.h>
int main(void) {
	int num, result = 1;
	scanf("%d", &num);
	num = num % 2 ? num / 2 + 1 : num / 2;
	for (int i = 0; i < num; i++)
		result = (result * 2)%16769023;
	printf("%d", result);
	return 0;
}