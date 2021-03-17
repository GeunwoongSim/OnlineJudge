#include <cstdio>
int main(void) {
	int max = 0, input,index;
	for (int i = 0; i < 9; i++) {
		scanf("%d", &input);
		if (max < input) {
			max = input;
			index = i;
		}
	}
	printf("%d\n%d", max, index + 1);
	return 0;
}