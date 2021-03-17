#include <cstdio>
int main(void) {
	int N, K, Array[10000] = { 0, }, index = 0;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		if (N%i == 0) {
			Array[index++] = i;
		}
	}
	printf("%d", Array[K - 1]);
	return 0;
}