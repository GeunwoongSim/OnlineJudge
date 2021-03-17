#include <cstdio>
#include <math.h>
char Array[30];
int main(void) {
	long long result = 0;
	int i = 0;
	for(; ;i++) {
		char ch;
		scanf("%c", &ch);
		if (ch == ' ')
			break;
		Array[i] = ch;
	}
	int num,index = 0;
	scanf("%d", &num);
	for (i = i - 1; i >= 0; i--) {
		if (Array[i] >= '0'&&Array[i] <= '9') {
			result += (Array[i]-'0')*pow(num, index);
		}
		else {
			result += (Array[i] - 'A'+10)*pow(num, index);
		}
		index++;
	}
	printf("%lld", result);
	return 0;
}