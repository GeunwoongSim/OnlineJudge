#include <cstdio>
int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n1, n2;
		scanf("%d,%d", &n1, &n2);
		printf("%d\n", n1 + n2);
	}
	return 0;
}