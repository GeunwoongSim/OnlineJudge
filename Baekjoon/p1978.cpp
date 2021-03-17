#include <cstdio>
bool check[1001] = { true,true,false,false, };
int main(void) {
	for (int i = 2;i<1001; i++) {
		for (int l = 2;i*l<1001; l++) {
			check[i*l] = true;
		}
	}
	int T, num, sum = 0;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &num);
		if (!check[num])
			sum++;
	}
	printf("%d", sum);
	return 0;
}