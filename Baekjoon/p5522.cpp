#include <cstdio>
int main(void) {
	int sum = 0,num;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		sum += num;
	}
	printf("%d", sum);
	return 0;
}