#include <cstdio>

char Map[100][100];

int main(void) {
	int num;
	scanf("%d", &num);
	int sum1 = 0, sum2 = 0;
	for (int y = 0; y < num; y++) {
		int value = 0;
		for (int x = 0; x < num; x++) {
			scanf(" %c", &Map[y][x]);
			if (Map[y][x] == 'X') { //ÁüÀÌ ÀÖÀ½
				if (value >= 2) {
					sum1++;
				}
				value = 0;
			}
			else { //ÁüÀÌ ¾øÀ½
				value++;
			}
		}
		if (value >= 2) {
			sum1++;
			value = 0;
		}
	}
	for (int x = 0; x < num; x++) {
		int value = 0;
		for (int y = 0; y < num; y++) {
			if (Map[y][x] == 'X') { //ÁüÀÌ ÀÖÀ½
				if (value >= 2) {
					sum2++;
				}
				value = 0;
			}
			else { //ÁüÀÌ ¾øÀ½
				value++;
			}
		}
		if (value >= 2) {
			sum2++;
			value = 0;
		}
	}
	printf("%d %d", sum1,sum2);
	return 0;
}