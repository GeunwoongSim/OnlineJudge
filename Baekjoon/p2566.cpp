#include <cstdio>
int main(void) {
	int max = 0, maxX, maxY,input;
	for (int y = 0; y < 9; y++) {
		for (int x = 0; x < 9; x++) {
			scanf("%d", &input);
			if (input > max) {
				max = input;
				maxX = x + 1;
				maxY = y + 1;
			}
		}
	}
	printf("%d\n%d %d", max, maxY, maxX);
	return 0;
}