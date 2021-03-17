#include <cstdio>
int main(void) {
	int sum = 0;
	while (true) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		if (ch == ',')
			sum++;
	}
	printf("%d", sum+1);
	return 0;
}