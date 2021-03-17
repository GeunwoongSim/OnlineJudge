#include <stdio.h>
#include <list>

using namespace std;

int main(void) {
	int N, K;
	scanf("%d %d", &N, &K);
	list<int> L;
	for (int i = 1; i <= N; i++) {
		L.push_back(i);
	}
	int number = 1;
	printf("<");
	while (!L.empty()) {
		if (number == K) { //Á¦°ÅÇÒ Â÷·Ê
			int num = L.front();
			L.pop_front();
			printf("%d", num);
			if (!L.empty()) {
				printf(", ");
			}
			number = 1;
		}
		else {
			int num = L.front();
			L.pop_front();
			L.push_back(num);
			number++;
		}
	}
	printf(">");
	
	return 0;
}