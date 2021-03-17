#include <cstdio>
int main(void) {
	int a, b, v;
	scanf("%d %d %d", &a, &b, &v);
	int result = (v - b) / (a - b);
	if (result*(a-b)+b != v) {
		result++;
	}
	printf("%d", result);
	return 0;
}