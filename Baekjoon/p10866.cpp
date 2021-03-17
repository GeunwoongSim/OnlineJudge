#include <cstdio>
#include <cstring>
#include <list>
using namespace std;
int main(void) {
	list<int> L;
	int T, inputNumber;
	char input[11];
	scanf("%d", &T);
	while (T--) {
		scanf("%s", input);
		if (!strcmp(input, "push_front")) {
			scanf("%d", &inputNumber);
			L.push_front(inputNumber);
		}
		else if (!strcmp(input, "push_back")) {
			scanf("%d", &inputNumber);
			L.push_back(inputNumber);
		}
		else if (!strcmp(input, "pop_front")) {
			if (L.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", L.front());
				L.pop_front();
			}
		}
		else if (!strcmp(input, "pop_back")) {
			if (L.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", L.back());
				L.pop_back();
			}
		}
		else if (!strcmp(input, "size")) {
			printf("%d\n", L.size());
		}
		else if (!strcmp(input, "empty")) {
			L.empty() ? printf("1\n") : printf("0\n");
		}
		else if (!strcmp(input, "front")) {
			if (L.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", L.front());
			}
		}
		else if (!strcmp(input, "back")) {
			if (L.empty()) {
				printf("-1\n");
			}
			else {
				printf("%d\n", L.back());
			}
		}
	}
	return 0;
}