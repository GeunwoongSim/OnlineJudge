#include <cstdio>
int main(void) {
	int Testcase;
	scanf("%d", &Testcase);
	for (int t = 0; t< Testcase; t++) {
		int sum = 0, num,number;
		scanf("%d", &num);
		for (int i = 0; i < num; i++) {
			scanf("%d", &number);
			sum += number;
		}
		printf("%d\n", sum);
	}
	return 0;
}