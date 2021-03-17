#include <cstdio>
bool check[1001] = { false,false,true,false, };
int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 4; i <= num; i++) {
		if (check[i - 1] && check[i - 3])
			check[i] = false;
		else
			check[i] = true;
	}
	check[num] ? printf("SK") : printf("CY");
	return 0;
}