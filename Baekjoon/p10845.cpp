#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
int main(void) {
	queue<int> Q;
	int T,inputNumber;
	char input[6];
	scanf("%d", &T);
	while (T--) {
		scanf("%s",input);
		if (!strcmp(input, "push")) {
			scanf("%d", &inputNumber);
			Q.push(inputNumber);
		}
		else if (!strcmp(input, "pop")) {
			if (Q.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n",Q.front());
				Q.pop();
			}
		}
		else if (!strcmp(input, "size")) {
			printf("%d\n", Q.size());
		}
		else if (!strcmp(input, "empty")) {
			Q.empty() ? printf("1\n") : printf("0\n");
		}
		else if (!strcmp(input, "front")) {
			Q.empty() ? printf("-1\n") : printf("%d\n",Q.front());
		}
		else if (!strcmp(input, "back")) {
			Q.empty() ? printf("-1\n") : printf("%d\n", Q.back());
		}
	}
	return 0;
}