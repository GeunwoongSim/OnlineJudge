#include <cstdio>
int main(void) {
	while (true) {
		int n1, n2;
		scanf("%d %d", &n1, &n2);
		if (n1 == 0 && n2 == 0)
			break;
		n1 > n2 ? printf("Yes\n") : printf("No\n");
	}
	return 0;
}