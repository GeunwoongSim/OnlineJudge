#include <cstdio>
int main(void) {
	char str1[101] = {}, compare[] = {'C','A','M','B','R','I','D','G','E','\0'};
	scanf("%s", str1);
	for (int i = 0;str1[i] ; i++) {
		bool check = true;
		for (int l = 0; compare[l]; l++) {
			if (str1[i] == compare[l]) {
				check = false;
				break;
			}
		}
		if (check)
			printf("%c", str1[i]);
	}
	return 0;
}