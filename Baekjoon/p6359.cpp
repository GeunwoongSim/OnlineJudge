#include <cstdio>
int main(void) {
	int T;
	scanf("%d", &T);
	while (T--) {
		bool check[101] = { false }; //false πÆ¿·±Ë
		int sum = 0,num;
		scanf("%d", &num);
		for(int i=1;i<=num;i++){
			for (int l = 1; i*l <= num; l++) {
				check[i*l] = !check[i*l];
			}
		}
		for (int i = 1; i<= num; i++) {
			if (check[i])
				sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}