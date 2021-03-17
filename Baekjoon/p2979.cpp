#include <cstdio>
int result[101];
int main(void) {
	int a, b, c,sum = 0;
	scanf("%d %d %d", &a, &b, &c);
	for (int i = 0; i < 3; i++) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		for (int l = n1; l < n2; l++) {
			result[l]++;
		}
	}
	for (int i = 0; i <= 100; i++) {
		if (result[i] == 1) {
			sum += a;
		}
		else if (result[i] == 2) {
			sum += b*2;
		}
		else if (result[i] == 3) {
			sum += c*3;
		}
	}
	printf("%d", sum);
	return 0;
}