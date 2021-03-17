#include <cstdio>
int main(void) {
	int a, b, n, w,sum=0,result1,result2;
	scanf("%d %d %d %d", &a, &b, &n, &w);
	for (int n1 = 1; n - n1 != 0; n1++) {
		int n2 = n - n1;
		if (a*n1 + b * n2 == w) {
			sum++;
			result1 = n1;
			result2 = n2;
		}
			
	}
	sum == 1 ? printf("%d %d", result1, result2) : printf("-1");
	return 0;
}