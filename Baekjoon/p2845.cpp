#include <cstdio>
int main(void) {
	int L, P, Array[5] = { 0, };
	scanf("%d %d", &L, &P);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &Array[i]);
	}
	for (int i = 0; i < 5; i++) {
		printf("%d ", Array[i] - L * P);
	}
	return 0;
}