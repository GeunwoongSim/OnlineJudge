#include <stdio.h>
#include <algorithm>

using namespace std;

int Array[50];

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &Array[i]);
	}
	sort(Array,Array+num);
	printf("%d", Array[0] * Array[num - 1]);
	return 0;
}