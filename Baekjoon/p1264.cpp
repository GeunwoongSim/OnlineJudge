#include <stdio.h>

int main(void) {
	bool check = false;
	while (1) {
		int number = 0;
		while (1) {//한줄입력
			char ch;
			scanf("%c", &ch);
			if (ch == '\n') {
				break;
			}
			else if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
				number++;
			}
			else if (ch == '#') {
				check = true;
				break;
			}
		}
		if (check)
			break;
		printf("%d\n", number);
	}
	
	return 0;
}