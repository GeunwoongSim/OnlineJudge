#include <stdio.h>
#include <math.h>

int main(void) {
	double in1, in2, in3; //�밢��, ���̺���, �ʺ����
	scanf("%lf %lf %lf", &in1, &in2, &in3);
	double w = sqrt((in1*in1)*((in3*in3) / ((in2*in2) + (in3*in3))));
	double h = (in2 / in3) * w;
	int rw = w;
	int rh = h;
	printf("%d %d", rh, rw);
	return 0;
}