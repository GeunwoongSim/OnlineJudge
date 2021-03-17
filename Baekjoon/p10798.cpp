#include <cstdio>
char str[5][16];
int main(void) {
	for (int i = 0; i < 5; i++) {
		scanf("%s", str[i]);
	}
	for (int x = 0;x<15; x++) {
		for (int y = 0; y < 5; y++) {
			if (str[y][x] == ' ' || str[y][x] == '\n' || str[y][x] == '\0')
				continue;
			printf("%c", str[y][x]);
		}
	}
	return 0;
}