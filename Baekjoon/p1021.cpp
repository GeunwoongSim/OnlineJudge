#include <cstdio>
#include <list>
using namespace std;
int main(void) {
	list<int> Q;
	list<int> Search;
	int sum = 0;
	int N, M, num;
	scanf("%d %d", &N, &M);
	for (int i = 1; i <= N; i++) {
		Q.push_back(i);
	}
	for (int i = 0; i < M; i++) {
		scanf("%d", &num);
		Search.push_back(num);
	}
	while (!Search.empty()) {
		num = Search.front();
		Search.pop_front();
		int result=0;
		for (list<int>::iterator p = Q.begin(); p != Q.end(); p++) {
			if (*p == num) {
				break;
			}
			result++;
		}
		if (Q.size() - result < result) { //후반에 있음
			while (Q.front() != num) {
				int temp = Q.back();
				Q.pop_back();
				Q.push_front(temp);
				sum++;
			}
		}
		else { //전반에 있음
			while (Q.front() != num) {
				int temp = Q.front();
				Q.pop_front();
				Q.push_back(temp);
				sum++;
			}
		}
		Q.pop_front();
	}
	printf("%d", sum);
	
	return 0;
}