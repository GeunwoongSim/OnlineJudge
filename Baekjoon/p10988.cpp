#include <cstdio>
#include <cstring>
int main(void) {
	char str[101];
	int strlength = 0;
	scanf("%s", str);
	strlength = strlen(str);
	bool check = true;
	for (int i = 0; i < strlength / 2; i++) {
		if (str[i] != str[strlength-1 - i]) {
			check = false;
			break;
		}
	}
	if (check) {
		printf("1");
	}
	else
		printf("0");
	return 0;
}