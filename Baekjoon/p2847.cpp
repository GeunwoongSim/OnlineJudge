#include <cstdio>
int Arr[101];

int main(void) {
	int N, sum = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &Arr[i]);
	}
	for (int i = N - 2; i >= 0; i--) {
		if (Arr[i] >= Arr[i + 1]) {
			sum += Arr[i] - (Arr[i + 1] - 1);
			Arr[i] = Arr[i + 1] - 1;
		}
	}
	printf("%d", sum);
	return 0;
}