#include <cstdio>
#include<algorithm>
int main(void) {
	int T;
	scanf("%d", &T);
	for (int t = 0; t < T; t++) {
		int n, Array[100] = { 0, }, sum = 0;
		scanf("%d", &n);
		for (int i = 0; i < n; i++)
			scanf("%d", &Array[i]);
		std::sort(Array, Array + n);
		for (int i = 0; i < n - 1; i++)
			sum += (Array[i + 1] - Array[i]);
		printf("%d\n", sum*2);
	}
	/*ÀüÃ¼¸¦ ÈÈÁö¸»°í (Array[n-1] - Array[0])*2 ÇÏ¸é µÊ*/
	return 0;
}