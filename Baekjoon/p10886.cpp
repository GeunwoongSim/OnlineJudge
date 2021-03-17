#include <cstdio>
int main(void) {
	int result[2] = { 0, }, T, num;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &num);
		result[num]++;
	}
	result[0] > result[1] ? printf("Junhee is not cute!") : printf("Junhee is cute!");
	return 0;
}