#include <cstdio>
#include <algorithm>
int main(void) {
	int Array[5];
	int sum = 0, mid = 0;
	for (int i = 0; i < 5; i++) {
		scanf("%d", &Array[i]);
		sum += Array[i];
	}
	std::sort(Array, Array + 5);
	printf("%d\n%d", sum / 5, Array[2]);
	return 0;
}