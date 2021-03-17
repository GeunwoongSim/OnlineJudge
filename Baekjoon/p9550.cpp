#include <cstdio>
int main(void) {
	int Testcase;
	scanf("%d", &Testcase);
	for (int T = 0; T < Testcase; T++) {
		int N, K,num,sum = 0;
		scanf("%d %d", &N, &K);
		for (int n = 0; n < N; n++) {
			scanf("%d", &num);
			sum += num / K;
		}
		printf("%d\n", sum);
	}
	return 0;
}