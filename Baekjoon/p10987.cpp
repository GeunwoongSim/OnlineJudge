#include <cstdio>
int main(void) {
	int sum = 0;
	while (true) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			sum++;
	}
	printf("%d", sum);
	return 0;
}