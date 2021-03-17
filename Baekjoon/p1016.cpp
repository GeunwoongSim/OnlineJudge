#pragma warning(disable:4996)
#include <stdio.h>
#include <math.h>

#define mmax 1010000

bool number[mmax];

int main(void) {

	long long min, max;
	long long result = 0;
	scanf("%lld %lld", &min, &max);
	
	for (long long i = 2; i*i < max; i++) {
		bool check = false;
		long long s = min / (i*i);
		if (s *(i*i) != min) { //소수점으로 잘린경우
			s++;
		}
		
	}
	printf("%lld", result);
	return 0;
}