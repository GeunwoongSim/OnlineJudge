#include <cstdio>
#include <queue>
using namespace std;

int main(void) {
	int N, K, In=1;
	queue<int> Q;
	scanf("%d %d", &N, &K);
	for (int i = 1; i <= N; i++) {
		Q.push(i);
	}
	printf("<");
	while (Q.size()!=1) {
		if (In == K) {
			printf("%d, ", Q.front());
			Q.pop();
			In = 1;
		}
		else {
			Q.push(Q.front());
			Q.pop();
			In++;
		}
	}
	printf("%d>", Q.front());
}