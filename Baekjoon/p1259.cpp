#include <stdio.h>
#include <math.h>


int main(void) {
	while (1) {
		int num;
		scanf("%d", &num);
		if (num == 0) {
			break;
		}
		int length = log10(num) + 1;
		int Array[5];
		int value = num;
		for (int i = 0; i < length; i++) {
			Array[i] = value % 10;
			value = value / 10;
		}
		int check = 0;
		for (int i = 0; i < length / 2; i++) {
			if (Array[i] != Array[(length - 1) - i]) {
				check = 1;
				break;
			}
		}
		if (check) {
			printf("no\n");
		}
		else {
			printf("yes\n");
		}
	}
	return 0;
}