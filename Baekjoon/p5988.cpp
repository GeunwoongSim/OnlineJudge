#include <cstdio>
int main(void) {
	int T;
	char num[61];
	scanf("%d", &T);
	while (T--) {
		int i = 0;
		scanf("%s", num);
		for (; num[i]; i++);
		int check = num[i - 1] -'0';
		check%2? printf("odd\n") : printf("even\n");
	}
	return 0;
}