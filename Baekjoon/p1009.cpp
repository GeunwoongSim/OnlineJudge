#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

int map[10][4] = { {0,0,0,0 }, {1, 1, 1, 1}, { 2,4,8,6 }, {3,9,7,1}, {4,6,4,6}, {5,5,5,5},{6,6,6,6},{7,9,3,1},{8,4,2,6},{9,1,9,1} };

int main(void) {
	int Testcase;
	scanf("%d", &Testcase);
	for (int t = 0; t < Testcase; t++) {
		int a, b;
		scanf("%d %d", &a, &b);
		a = a % 10;
		b = b % 4 - 1;
		if (b < 0) {
			b = 3;
		}
		int result = map[a][b];
		if (result == 0) {
			printf("10\n");
		}
		else {
			printf("%d\n", result);
		}
	}
	return 0;
}