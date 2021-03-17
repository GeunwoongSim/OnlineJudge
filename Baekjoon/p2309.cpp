#include <cstdio>
#include <algorithm>
using namespace std;
int Array[9];

int main(void) {
	int sum = 0;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &Array[i]);
		sum += Array[i];
	}
	sort(Array, Array + 9);
	int n1, n2;
	bool check = false;
	for (int i = 0; i < 8; i++) {
		for (int l = i+1; l < 9; l++) {
			if (sum - Array[i] - Array[l] == 100) {
				n1 = i;
				n2 = l;
				check = true;
				break;
			}
		}
		if (check)
			break;
	}
	for (int i = 0; i < 9; i++) {
		if (n1 == i || n2 == i)
			continue;
		printf("%d\n", Array[i]);
	}
	return 0;
}