#include <cstdio>
int main(void) {
	int testcase, max = 0;
	scanf("%d", &testcase);
	for (int T = 0; T < testcase; T++) {
		int a, b, c,d=0,sum = 0;
		scanf("%d %d %d", &a, &b, &c);
		if (a == b && b == c)
			sum = 10000 + a * 1000;
		else if ((a == b && a != c) || (b == c && b != a))
			sum = 1000 + b * 100;
		else if (a == c && a != b)
			sum = 1000 + a * 100;
		else {
			if (d < a) d = a;
			if (d < b) d = b;
			if (d < c) d = c;
			sum = d * 100;
		}
		if (max < sum)
			max = sum;
	}
	printf("%d", max);

	return 0;
}