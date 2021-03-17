#include <cstdio>
int main(void) {
	int E, S, M, a = 0, b = 0, c = 0,result = 1;
	scanf("%d %d %d", &E, &S, &M);
	while (!(a+1==E&&b+1==S&&c+1==M)) {
		a = (a + 1) % 15;
		b = (b + 1) % 28;
		c = (c + 1) % 19;
		result++;
	}
	printf("%d", result);
	return 0;
}