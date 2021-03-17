#include <cstdio>
int main(void) {
	int s, e, Array[1001], index = 0,sum=0;
	scanf("%d %d", &s, &e);
	for (int i = 1; index < 1001; i++) {
		for (int l = 0; l < i; l++) {
			Array[index] = i;
			index++;
			if (index == 1001) {
				break;
			}
		}
	}
	for (int i = s-1; i < e; i++) {
		sum += Array[i];
	}
	printf("%d", sum);
	return 0;
}