#include <cstdio>

int main(void) {
	char result[5] = { 'D','C','B','A','E' };
	for (int i = 0; i < 3; i++) {
		int num = 0, a;
		for (int l = 0; l < 4; l++) {
			scanf("%d", &a);
			num += a;
		}
		printf("%c\n", result[num]);
	}
	return 0;
}