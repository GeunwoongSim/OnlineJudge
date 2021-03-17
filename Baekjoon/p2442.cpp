#include <cstdio>
int main(void) {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int l = 0; l < n -i; l++) {
			printf(" ");
		}
		for (int l = 0; l < 2*i - 1; l++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}