#include <cstdio>
int main(void) {
	bool check[31] = { false, };
	for (int i = 0; i < 28; i++) {
		int num;
		scanf("%d", &num);
		check[num] = true;
	}
	for (int i = 1; i < 31; i++)
		if (!check[i])
			printf("%d\n", i);
	return 0;
}