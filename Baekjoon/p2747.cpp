#include <cstdio>
int main(void) {
	int input;
	scanf("%d", &input);
	long long n1 = 0, n2 = 1,sum = 0;
	for (int i = 2; i <= input; i++) {
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
	}
	if (input == 1) {
		printf("1");
	}
	else {
		printf("%d", sum);
	}
	
	return 0;
}