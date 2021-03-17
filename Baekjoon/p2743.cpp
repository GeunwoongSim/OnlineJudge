#include <cstdio>
int main(void) {
	char Array[101];
	int i = 0;
	scanf("%s", Array);
	for (; Array[i]; i++);
	printf("%d", i);
	return 0;
}
/*
문자열길이 구하기 strlen(char[]) -> <cstring>
*/