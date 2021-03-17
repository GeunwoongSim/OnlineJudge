#include <stdio.h>

int main(void) {
	int result = 0;
	for (int y = 0; y < 8; y++) {
		for (int x = 0; x < 8; x++) {
			char ch;
			scanf(" %c", &ch);
			if (!((x + y) % 2)) {
				if (ch == 'F') {
					result++;
				}
			}
		}
	}
	printf("%d", result);
}