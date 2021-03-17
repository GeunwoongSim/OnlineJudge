#include <cstdio>
int main(void) {
	int num;
	scanf("%d", &num);
	if (num % 5 == 0) {
		printf("%d", num / 5);
	}
	else {
		printf("%d", num / 5 + 1);
	}
	return 0;
}