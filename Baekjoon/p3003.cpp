#include <cstdio>
int result[6] = { 1,1,2,2,2,8 };
int main(void) {
	int Array[6];
	for (int i = 0; i < 6; i++)
		scanf("%d", &Array[i]);
	for (int i = 0; i < 6; i++)
		printf("%d ", result[i] - Array[i]);
	return 0;
}