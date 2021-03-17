#include <cstdio>
int map[30][30];
int main(void) {
	for (int i = 1; i < 30; i++) {
		map[1][i] = i;
		map[i][i] = 1;
	}
	for (int y = 2; y < 30; y++) {
		for (int x = y; x < 30; x++) {
			int sum = 0;
			for (int x1 = x - 1;x1>=y-1;x1--) {
				sum += map[y - 1][x1];
			}
			map[y][x] = sum;
		}
	}
	int T;
	scanf("%d", &T);
	while (T--) {
		int N, M;
		scanf("%d %d", &N, &M);
		printf("%d\n", map[N][M]);
	}
	return 0;
}