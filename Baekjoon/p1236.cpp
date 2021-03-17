#include <stdio.h>

int row[51]; //За
int col[51]; //ї­

int main(void) {
	int N, M;
	scanf("%d %d", &N, &M);
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			char ch;
			scanf(" %c", &ch);
			if (ch == 'X') {
				row[y] = true;
				col[x] = true;
			}
		}
	}
	int result1=0, result2=0;
	for (int i = 0; i < N; i++) {
		if (!row[i])
			result1++;
	}
	for (int i = 0; i < M; i++) {
		if (!col[i])
			result2++;
	}
	printf("%d", result1 > result2 ? result1 : result2);
	return 0;
}