#pragma warning(disable:4996)
#include <stdio.h>

int map[2][3];

int main(void) {
	int N, K;
	scanf("%d %d", &N, &K);
	for (int i = 0; i < N; i++) {
		int s, y;
		scanf("%d %d", &s, &y);
		map[s][(y - 1) / 2]++;
	}
	int result = 0;
	for (int i = 0; i < 2; i++) {
		for (int l = 1; l < 3; l++) {
			int num = map[i][l] / K;
			if (num * K != map[i][l]) {
				num++;
			}
			result = result + num;
		}
	}
	int num = (map[0][0] + map[1][0]) / K;
	if (num * K != (map[0][0] + map[1][0])) {
		num++;
	}
	result = result + num;
	printf("%d", result);
	return 0;
}