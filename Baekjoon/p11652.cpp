#include <cstdio>
#include <algorithm>
long long arr[1000000];
int main(void) {
	long long T,num,gesu=0,max=0,maxNum;
	scanf("%lld", &T);
	for (int i = 0; i < T;i++) {
		scanf("%lld", &num);
		arr[i] = num;
	}
	num = 0;
	std::sort(arr, arr + T);
	for (int i = 0; i < T; i++) {
		if (num != arr[i]) {
			if (max < gesu) {
				max = gesu;
				maxNum = num;
			}
			gesu = 1;
			num = arr[i];
		}
		else {
			gesu++;
		}
	}
	if (max < gesu) {
		max = gesu;
		maxNum = num;
	}
	printf("%lld", maxNum);
	return 0;
}