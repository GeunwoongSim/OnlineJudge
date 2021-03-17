#include <cstdio>
int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int l = 0; l < num; l++) {
			if (l <= i)
				printf("*");
			else
				printf(" ");
		}
		for (int l = 0; l < num; l++) {
			if (num - l-1 <= i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++) {
		for (int l = 0; l < num; l++) {
			if (l < num-i-1)
				printf("*");
			else
				printf(" ");
		}
		for (int l = 0; l < num; l++) {
			if (l>i)
				printf("*");

			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}