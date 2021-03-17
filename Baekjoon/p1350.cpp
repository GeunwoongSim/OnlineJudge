#include <stdio.h>

long long Array[1001];

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%lld", &Array[i]);
	}
	long long total = 0;
	long long size;
	scanf("%lld", &size);
	for (int i = 0; i < num; i++) {
		long long disk = Array[i];
		total += (disk / size) * size;
		if (disk%size > 0) { //한개더 사용해야함
			total += size;
		}
	}
	printf("%lld", total);
	return 0;
}