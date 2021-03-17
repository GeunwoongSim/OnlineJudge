#include <cstdio>
#include <queue>
using namespace std;
int main(void) {
	priority_queue<int> Q;
	int T,input;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &input);
		switch (input) {
		case 0:
			if (Q.empty()) {
				printf("0\n");
			}
			else {
				printf("%d\n", Q.top());
				Q.pop();
			}
			break;
		default:
			Q.push(input);
		}
	}
	return 0;
}