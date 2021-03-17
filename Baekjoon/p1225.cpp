#include <stdio.h>
#include <math.h>

char num1[10001];
char num2[10001];

int main(void) {
	long long result = 0;
	long long num1index = 0;
	while (1) {
		char ch;
		scanf("%c", &ch);
		if (ch == ' ')
			break;
		num1[num1index] = ch - '0';
		num1index++;
	}
	long long num2index = 0;
	while (1) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		num2[num2index] = ch - '0';
		num2index++;
	}
	for (int i = 0; i < num1index; i++) {
		for (int l = 0; l < num2index; l++) {
			result += num1[i] * num2[l];
		}
	}
	printf("%lld", result);

	return 0;
}