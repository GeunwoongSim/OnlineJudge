#include <stdio.h>
#include <math.h>
char Array[1000000];
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
	int length = 0;
	switch (numberLength % 3) {
	case 0:
		length = 0;
		break;
	case 1:
		length = 2;
		break;
	case 2:
		length = 1;
		break;
	}
	int number = 0;
	for (int i = 0; i < numberLength; i++) {
		if (Array[i] == '1') {
			number += pow(2, 2-length);
		}
		length++;

		if (length == 3) { //Ãâ·Â
			length = 0;
			printf("%d", number);
			number = 0;
		}
	}
	return 0;
}