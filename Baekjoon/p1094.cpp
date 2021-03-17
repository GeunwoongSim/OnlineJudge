#include <cstdio>
int main(void) {
	int num, sum, Array[20] = { 64, },result = 1;
	scanf("%d", &num);
	while (true) {
		sum = 0;
		for (int i = 0; i < result; i++) { //막대의길이를 더한다
			sum += Array[i];
		}
		if (sum > num) {
			//두개로 쪼개서 배열에 넣음
			Array[result - 1] /= 2; // 64->32
			Array[result++] = Array[result - 1]; // 32

			sum = 0;
			for (int i = 0; i < result - 1; i++) {
				sum += Array[i];
			}
			if (sum > num) {
				Array[result - 1] = 0;
				result--;
			}
			else if (sum == num) {
				break;
			}
		}
		else if (sum == num)
			break;
		
	}
	if (sum == 64) {
		printf("1");
	}
	else {
		printf("%d", result - 1);
	}
	
	return 0;
}