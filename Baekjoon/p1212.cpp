#include <stdio.h>
#include <iostream>
#include <math.h>

using namespace std;

char Array[333335];

int main(void) {
	int numberLength = 0;
	while (1) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		Array[numberLength] = ch;
		numberLength++;
	}
	for (int i = 0; i < numberLength; i++) {
		int number = Array[i] - '0'; //한자리수
		int a = number % 2;
		number = number / 2;
		int b = number % 2;
		number = number / 2;
		int c = number % 2;
		if (i == 0) {
			if (c == 0) {
				if (b == 0) {
					printf("%d", a);
				}
				else {
					printf("%d%d", b, a);
				}
			}
			else {
				printf("%d%d%d", c, b, a);
			}
		}
		else {
			printf("%d%d%d", c, b, a);
		}
		
	}
	return 0;
	
}