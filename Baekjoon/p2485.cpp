#include <cstdio>
#include <algorithm>

int main(void) {
	long long Arr[100000], T, a1, an, d, n;
	scanf("%lld", &T);
	for (int index = 0; index < T; index++)
		scanf("%lld", &Arr[index]);
	std::sort(Arr, Arr + T);
	a1 = Arr[0];
	an = Arr[T - 1];
	d = Arr[1] - Arr[0];
	for (int index = 2; index < T; index++)
		if (Arr[index] - Arr[index - 1] < d)
			d = Arr[index] - Arr[index - 1];
	while (d >= 1) {
		bool check = true;
		for (int index = 1; index < T; index++) {
			if ((Arr[index] - a1) % d != 0) {
				check = false;
				break;
			}
		}
		if (check) {
			break;
		}
		d = d - 1;
	}
	n = (an - a1) / d + 1;
	printf("%lld", n - T);

	return 0;
}