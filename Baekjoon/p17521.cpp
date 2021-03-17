#include <iostream>

long long Array[20];
int main(void) {
	long long n, w;
	scanf("%lld %lld", &n, &w);
	for (int i = 0; i < n; i++) {
		scanf("%d", &Array[i]);
	}
	long long coinNum = w / Array[0]; //시작 코인수
	w = w - coinNum * Array[0]; //시작 금액

	bool check = true; //상승 - 하락
	for (int i = 1; i < n; i++) {
		if (Array[i] - Array[i - 1] > 0) { //상승
		   //상승일때 상승을 만나면 대기
			if (check) {

			}
			else {//하강일때 상승을 만나면 구매
				coinNum = w / Array[i - 1];
				w = w - coinNum * Array[i - 1];
				check = true;

			}
		}
		else if (Array[i] - Array[i - 1] == 0) { //동결

		}
		else { //하락
		   //상승일때 하락을 만나면 판매
			if (check) {
				w = w + coinNum * Array[i - 1];
				check = false;
			}
			else {//하락일때 하락을 만나면 대기

			}
		}
	}
	if (check) {
		w = w + coinNum * Array[n - 1];
	}
	printf("%lld", w);
	return 0;
}