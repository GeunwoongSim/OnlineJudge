#include <cstdio>
int main(void) {
	int num;
	scanf("%d",&num);
	for (int i = 0; i < num; i++) {
		for (int l = 0; l < i; l++) {
			printf(" ");
		}
		for (int l = 0; l < 2 * (num - i) - 1; l++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}