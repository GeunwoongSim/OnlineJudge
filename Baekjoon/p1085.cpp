#include <stdio.h>
#include <math.h>

int main(void) {
	double x, y, w, h;
	scanf("%lf %lf %lf %lf", &x, &y, &w, &h);
	double result;
	if (x < w / 2 && y < h / 2) { //4
		result = x < y ? x : y;
	}
	else if (x < w / 2 && y >= h / 2) { // 1
		result = x < h-y ? x : h-y;
	}
	else if (x >= w / 2 && y < h / 2) { //3
		result = w-x < y ? w-x : y;
	}
	else { // 2
		result = w-x < h-y ? w-x : h-y;
	}
	printf("%.0lf", result);
	return 0;
}