#include <cstdio>
int main(void) {
	char str[51];
	scanf("%s", str);
	int sum = 10;
	for (int i = 1; str[i]; i++) {
		str[i] == str[i - 1] ? sum += 5 : sum += 10;
	}
	printf("%d", sum);
	return 0;
}