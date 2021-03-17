#include <cstdio>
#include <algorithm>
using namespace std;

int num1[200001];
int num2[200001];

int main(void) {
	int num1Index,num2Index,sum=0;
	scanf("%d %d", &num1Index, &num2Index);
	for (int index = 0; index < num1Index; index++) {
		scanf("%d", &num1[index]);
	}
	for (int index = 0; index < num2Index; index++) {
		scanf("%d", &num2[index]);
	}
	sort(num1, num1 + num1Index);
	sort(num2, num2 + num2Index);
	int num1I = 0, num2I = 0;
	while (num1I < num1Index &&num2I < num2Index) {
		if (num1[num1I] < num2[num2I]) { // 집합A의 값이 더 작음
			sum++;
			num1I++;
		}
		else if (num1[num1I] > num2[num2I]) { // 집합B의 값이 더 작음
			sum++;
			num2I++;
		}
		else if (num1[num1I] == num2[num2I]) { // 집합의 값이 같음
			num1I++;
			num2I++;
		}
	}
	while (num1I < num1Index) {
		sum++;
		num1I++;
	}
	while (num2I < num2Index) {
		sum++;
		num2I++;
	}
	printf("%d", sum);
	return 0;
}