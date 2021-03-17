#include <cstdio>
int main(void) {
	int T,sum = 0;
	scanf("%d", &T);
	while (T--) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		sum += n2 % n1;
	}
	printf("%d", sum);
	return 0;
}