#include <cstdio>
#include <algorithm>
int main(void) {
	int Array[3];
	for (int i = 0; i < 3; i++) {
		scanf("%d", &Array[i]);
	}
	std::sort(Array, Array + 3);
	for (int i = 0; i < 3; i++) {
		printf("%d ", Array[i]);
	}
	return 0;
}