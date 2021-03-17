#include <cstdio>
#include <queue>
#include <stack>
using namespace std;

bool map[1001][1001];
bool check[1001] = { false, };
int N, M, V;

stack<int> S;
queue<int> Q;

void DFS(int v) {
	S.push(v);
	check[v] = true;
	printf("%d ", v);
	while (!S.empty()) {
		bool True = true;
		int s = S.top();
		for (int i = 1; i <= N; i++) {
			if (check[i] == false && map[s][i]) {
				printf("%d ", i);
				S.push(i);
				check[i] = true;
				True = false;
				break;
			}
		}
		if (True) {
			S.pop();
		}
	}
	
}

void BFS(int v) {
	Q.push(v);
	check[v] = true;
	printf("%d ", v);
	while (!Q.empty()) {
		int s = Q.front();
		for (int i = 1; i <= N; i++) {
			if (check[i] == false && map[s][i]) {
				printf("%d ", i);
				Q.push(i);
				check[i] = true;
			}
		}
		Q.pop();
	}
}

int main(void) {
	scanf("%d %d %d", &N, &M, &V);
	for (int i = 0; i < M; i++) {
		int num1, num2;
		scanf("%d %d", &num1, &num2);
		map[num1][num2] = true;
		map[num2][num1] = true;
	}
	DFS(V);
	for (int i = 1; i <= N; i++) {
		check[i] = false;
	}
	printf("\n");
	BFS(V);
	return 0;
}