#include <cstdio>
int main(void) {
	double result = 0;
	char ch;
	for(int i =0; i<2;i++){
		double value;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		if (i == 0) {
			switch (ch) {
			case 'A':
				value = 4.0;
				break;
			case 'B':
				value = 3.0;
				break;
			case 'C':
				value = 2.0;
				break;
			case 'D':
				value = 1.0;
				break;
			case 'F':
				value = 0.0;
				break;
			}
		}
		else {
			switch (ch) {
			case '+':
				value = 0.3;
				break;
			case '0':
				value = 0.0;
				break;
			case '-':
				value = -0.3;
				break;
			}
		}
		result += value;
	}
	printf("%.1lf", result);
	return 0;
}