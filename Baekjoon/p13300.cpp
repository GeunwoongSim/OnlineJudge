#pragma warning(disable:4996)
#include <stdio.h>

int map[2][7];

int main(void) {
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		int Y, S;
		scanf("%d %d", &S, &Y);
		map[S][Y]++;
	}
	int result = 0;
	for (int i = 0; i < 2; i++) {
		for (int l = 0; l < 7; l++) {
			int num = map[i][l] / K;
			if (num*K != map[i][l]) {
				num++;
			}
			result = result + num;
		}
	}
	printf("%d", result);
	return 0;
}