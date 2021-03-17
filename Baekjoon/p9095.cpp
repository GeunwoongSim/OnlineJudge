#include <cstdio>
int result[20] = { 0,1,2,4, };
int main(void) {

	for (int i = 1; i <= 10; i++) {
		if (i + 1 >= 4)
			result[i + 1] += result[i];
		if (i + 2 >= 4)
			result[i + 2] += result[i];
		if (i + 3 >= 4)
			result[i + 3] += result[i];
	}

	int T;
	scanf("%d", &T);
	while (T--) {
		int num;
		scanf("%d", &num);
		printf("%d\n", result[num]);
	}
	return 0;
}