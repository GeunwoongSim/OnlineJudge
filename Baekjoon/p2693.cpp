#include <cstdio>
#include <algorithm>
using namespace std;

int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		int Arr[10];
		for (int i = 0; i < 10; i++) {
			scanf("%d", &Arr[i]);
		}
		sort(Arr, Arr + 10);
		printf("%d\n", Arr[7]);
	}
	return 0;
}