#include <cstdio>

int main(void) {
	int N, num;
	scanf("%d", &N);
	int sum = 1;
	for (int i = 0; i < N;i++) {
		sum = sum - 1;
		scanf("%d", &num);
		sum = sum + num;
	}
	printf("%d", sum);
	return 0;
}