#include <cstdio>
int main(void) {
	int n1, n2;
	while (scanf("%d %d", &n1, &n2) != EOF) {
		printf("%d\n", n1 + n2);
	}
	return 0;
}
/*
	scanf는 EOF를 반환해준다
*/