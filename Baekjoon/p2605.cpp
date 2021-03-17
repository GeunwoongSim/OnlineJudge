#include <cstdio>
#include <cstring>
using namespace std;
int Array[100];
int main(void) {
	int studentNumber;
	scanf("%d", &studentNumber);
	for (int i = 0; i < studentNumber; i++) {
		int num;
		scanf("%d", &num);
		for (int l = i-1; l >= num; l--) {
			Array[l + 1] = Array[l];
		}
		Array[num] = i+1;
	}
	for (int i = studentNumber-1; i >=0 ; i--) {
		printf("%d ", Array[i]);
	}
	return 0;
}