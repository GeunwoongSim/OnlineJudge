#include <cstdio>
#include <algorithm>
int T, Array[1000000];
int main(void) {
	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &Array[i]);
	}
	std::sort(Array, Array + T);
	printf("%d %d", Array[0], Array[T - 1]);
	return 0;
}