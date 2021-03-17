#include <cstdio>
long long sumArray[100001];
void Init();
int main(void) {
	Init();
	long long num;
	scanf("%d", &num);
	for (int i = 1; i < 100001; i++) {
		if (num < sumArray[i]) {
			printf("%d", i-1);
			break;
		}
		else if (num == sumArray[i]) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}
void Init() {
	for (int i = 1; i <= 100000; i++) {
		sumArray[i] = sumArray[i - 1] + i;
	}
}
/*
num을 int로 선언해서 틀림!
-> 자료형 타입 잘생각해서 사용하자!
*/