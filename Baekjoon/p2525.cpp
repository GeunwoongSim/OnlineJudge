#include <cstdio>
int main(void) {
	int H, M;
	int num;
	scanf("%d %d", &H, &M);
	scanf("%d", &num);
	M = M + num;
	H = H + M / 60;
	H = H % 24;
	M = M % 60;
	printf("%d %d", H, M);
	return 0;
}