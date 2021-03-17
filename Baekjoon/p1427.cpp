#include <cstdio>
int main(void) {
	char Array[11];
	int number[10] = { 0, };
	scanf("%s", Array);
	for (int i = 0; Array[i]; i++) {
		number[Array[i] - '0']++;
	}
	for (int i = 9; i >=0; i--) {
		for (int l = 0; l < number[i]; l++) {
			printf("%d", i);
		}
	}
	return 0;
}