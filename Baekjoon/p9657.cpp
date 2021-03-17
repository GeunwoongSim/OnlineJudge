#include <cstdio>
bool check[1001] = { false,true,false,true,true, };
int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 5; i <= num; i++) {
		if (check[i - 1] && check[i - 3] && check[i - 4]) {
			check[i] = false;
		}
		else {
			check[i] = true;
		}
	}
	check[num] ? printf("SK") : printf("CY");
	return 0;
}