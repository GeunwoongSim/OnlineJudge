#include <cstdio>
#include <queue>
using namespace std;
int main(void) {
	int num;
	queue<int> Q;
	scanf("%d", &num);
	for (int i = 1; i <= num; i++) {
		Q.push(i);
	}
	while (Q.size() != 1) {
		int a = Q.front();
		printf("%d ", a);
		Q.pop();
		Q.push(Q.front());
		Q.pop();
	}
	printf("%d", Q.front());
	return 0;
}