#include <cstdio>
int main(void) {
	bool check[42] = { false, };
	int sum = 0, num;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &num);
		check[num % 42] = true;
	}
	for (int i = 0; i < 42; i++)
		if (check[i])
			sum++;
	printf("%d", sum);
	return 0;
}