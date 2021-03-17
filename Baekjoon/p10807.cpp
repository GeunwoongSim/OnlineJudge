#pragma warning(disable:4996)
#include <stdio.h>

int number[201];
int main(void) {
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		int num;
		scanf("%d", &num);
		number[num + 100]++;
	}
	int searchNum;
	scanf("%d", &searchNum);
	printf("%d", number[searchNum + 100]);
	return 0;
}