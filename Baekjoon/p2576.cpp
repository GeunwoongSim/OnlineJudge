#include <cstdio>
#include <algorithm>
int main(void) {
	int Array[7], sum = 0,min = 0;
	for (int i = 0; i < 7; i++)
		scanf("%d", &Array[i]);
	std::sort(Array, Array + 7);
	for (int i = 0; i < 7; i++) {
		if (Array[i] & 1) {
			sum += Array[i];
			if (min == 0)
				min = Array[i];
		}
	}
	sum == 0 ? printf("-1") : printf("%d\n%d", sum, min);
	return 0;
}