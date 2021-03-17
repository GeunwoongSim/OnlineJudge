#include <cstdio>
int main(void) {
	int h, m, s, num;
	scanf("%d %d %d", &h, &m, &s);
	scanf("%d", &num);
	h = (h + (m + (s + num) / 60) / 60) % 24;
	m = (m + (s + num) / 60) % 60;
	s = (s + num) % 60;
	printf("%d %d %d", h, m, s);
	return 0;
}