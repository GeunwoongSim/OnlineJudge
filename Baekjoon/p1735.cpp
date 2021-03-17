#include <cstdio>
bool sosu_check[30001] = { true,true,false,false };
int sosu[30001];
int main(void) {
	int sosu_index = 0;
	long long num1up, num1down, num2up, num2down;
	for (int i = 2;i<=30000; i++) {
		for (int l = 2; i*l <= 30000; l++) {
			sosu_check[i*l] = true;
		}
	}
	for (int i = 2; i <= 30000; i++) {
		if (!sosu_check[i]) {
			sosu[sosu_index] = i;
			sosu_index++;
		}
	}
	scanf("%lld %lld", &num1up, &num1down);
	scanf("%lld %lld", &num2up, &num2down);

	num1up = num1up * num2down + num1down * num2up;
	num1down = num1down * num2down;
	for (int i = 0; i < sosu_index; ) {
		if (sosu[i] > num1up || sosu[i] > num1down)
			break;
		if (num1up%sosu[i] == 0 && num1down%sosu[i] == 0) {
			num1up = num1up / sosu[i];
			num1down = num1down / sosu[i];
		}
		else {
			i++;
		}
	}
	printf("%lld %lld", num1up, num1down);
	return 0;
}