#include <cstdio>
int main(void) {
	int T,num;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		scanf("%d", &num);
		int value = num;
		for (int i = 0;value!=0;i++) {
			if (value % 2) {
				printf("%d ", i);
			}
			value = value / 2;
		}
		printf("\n");
	}
	return 0;
}