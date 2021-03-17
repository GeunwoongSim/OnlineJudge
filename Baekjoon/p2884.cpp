#include <cstdio>
int main(void) {
	int h, m;
	scanf("%d %d", &h, &m);
	h = (24 + h - (1 - (60 + m - 45) / 60)) % 24;
	m = (60 + m - 45) % 60;
	printf("%d %d", h, m);
	return 0;
}