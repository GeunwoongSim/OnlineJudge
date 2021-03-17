#include <cstdio>
int main(void) {
	int Array[100], testcase;
	scanf("%d", &testcase);
	for (int t = 0; t < testcase; t++) {
		scanf("%d", &Array[t]);
	}
	int sum = 0, point = 0;;
	for (int t = 0; t < testcase; t++) {
		if (Array[t] == 1) {
			point++;
			sum += point;
		}
		else {
			point = 0;
		}
	}
	printf("%d", sum);
	return 0;
}