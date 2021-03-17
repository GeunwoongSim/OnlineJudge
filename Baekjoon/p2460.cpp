#include <cstdio>
int main(void) {
	int sum = 0;
	int max = 0;
	for (int i = 0; i < 10; i++) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		sum = sum - n1 + n2;
		if (max < sum)
			max = sum;
	}
	printf("%d", max);
	return 0;
}