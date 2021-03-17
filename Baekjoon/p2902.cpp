#include <cstdio>
int main(void) {
	char Array[101];
	scanf("%s", Array);
	for (int i = 0; Array[i]; i++) {
		if (Array[i] >= 'A' && Array[i] <= 'Z')
			printf("%c", Array[i]);
	}
	return 0;
}