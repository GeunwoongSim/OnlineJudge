#include <cstdio>
int coin[6] = { 500,100,50,10,5,1 };
int main(void) {
	int price, sum = 0;
	scanf("%d", &price);
	price = 1000 - price;
	for (int i = 0; i < 6; i++) {
		sum += price / coin[i];
		price = price % coin[i];
	}
	printf("%d", sum);
	return 0;
}