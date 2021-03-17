#include <cstdio>
#include <cstring>
int main(void) {
	int testcase,num;
	char str[100];
	scanf("%d", &testcase);
	for (int t = 0; t < testcase; t++) {
		scanf("%d %s", &num, str);
		for (int i = 0; i < (int)strlen(str); i++) {
			if (i + 1 == num)
				continue;
			else
				printf("%c", str[i]);
		}
		printf("\n");
	}
	return 0;
}