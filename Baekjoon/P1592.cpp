#include <cstdio>
#include <iostream>

using namespace std;
int Array[1000] = { 0, };
int main(void) {
	int N, M, L;
	scanf("%d %d %d", &N, &M, &L);
	int value = 0;
	int result = 0;
	
	while (1) {
		Array[value]++; //°øÀ»¹ÞÀ½
		if (Array[value] == M) {
			printf("%d", result);
			break;
		}
		if (Array[value] % 2) { //È¦¼ö
			value = (value + L) % N;
		}
		else { //Â¦¼ö -> value = (value - L +N) % N
			value = (value - L);
			if (value < 0) {
				value = value + N;
			}
		}
		//°øÀ»´øÁü
		result++;
	}
	/*
	while(1){
		Array[value]++;
		if(Array[value] == M)
			break;
		value = Array[value%2] ? (value+L)%N : (value-L+N)%N;
	}
	printf("%d",result);
	*/
	return 0;
}