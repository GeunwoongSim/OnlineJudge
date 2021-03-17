#include <cstdio>
bool arr[2001];
int main(void) {
	int T, input;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &input);
		arr[input + 1000] = true;
	}
	for (int i = 0; i < 2001; i++) {
		if (arr[i]) {
			printf("%d ", i-1000);
		}
	}
	return 0;
}