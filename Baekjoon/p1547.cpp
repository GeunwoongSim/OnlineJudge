#include <cstdio>
#include <iostream>
using namespace std;
int main(void) {
	int Array[4] = {0,1,2,3}; //�� ��ȣ
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		int a, b;
		scanf("%d %d", &a, &b);
		if (a != b) { // -> swap(Array[a],Array[b]) : #include <algorighm>
			int temp = Array[a];
			Array[a] = Array[b];
			Array[b] = temp;
		}
	}
	for (int i = 1; i < 4; i++) {
		if (Array[i] == 1) {
			printf("%d", i);
			break;
		}
	}
	return 0;
}

/*
void swap(int &a, int &b){ //�Ű����� �ΰ��� ������ �ٲ�
	int temp = a;
	a = b;
	b = temp;
}
*/