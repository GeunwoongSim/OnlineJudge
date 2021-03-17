#include <cstdio>
int number[1000001] = { 0,0,1,1, }; //0 1 2 3
int main(void) {
	for (int i = 1; i <= 1000000; i++) {
		if (i + 1 <= 1000000)
			if (number[i + 1] == 0 || number[i + 1] > number[i] + 1) {
				number[i + 1] = number[i] + 1;
			}
		if (i * 2 <= 1000000)
			if (number[i * 2] == 0 || number[i * 2] > number[i] + 1) {
				number[i * 2] = number[i] + 1;
			}
		if (i * 3 <= 1000000)
			if (number[i * 3] == 0 || number[i * 3] > number[i] + 1) {
				number[i * 3] = number[i] + 1;
			}
	}
	int input;
	scanf("%d", &input);
	printf("%d", number[input]);
	return 0;
}