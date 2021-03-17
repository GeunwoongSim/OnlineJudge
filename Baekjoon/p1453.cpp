#include <cstdio>

int Array[100];

int main(void) {
	int num, result = 0,a;
	scanf("%d", &num);
	while(num--) {
		scanf("%d", &a);
		Array[a - 1] ? result++ : Array[a - 1]++;
	}
	printf("%d", result);
	return 0;
}