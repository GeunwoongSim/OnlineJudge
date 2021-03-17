#include <cstdio>
int main(void) {
	int n1, n2,a,b,c;
	scanf("%d\n%d", &n1, &n2);
	a = n2 / 100;
	b = (n2 % 100) / 10;
	c = (n2 % 100) % 10;
	printf("%d\n%d\n%d\n%d", n1*c, n1*b, n1*a, n1*c + n1 * b * 10 + n1 * a * 100);
	return 0;
}