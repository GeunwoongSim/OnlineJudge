#include <cstdio>
int main(void) {
	int Array[21] = { 0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0; i < 10; i++) {
		int s, e;
		scanf("%d %d", &s, &e);
		for (int l = 0; l < (e - s + 1) / 2; l++) {
			int temp = Array[s + l];
			Array[s + l] = Array[e - l];
			Array[e - l] = temp;
		}
	}
	for (int i = 1; i <= 20; i++) {
		printf("%d ", Array[i]);
	}
	return 0;
}