#include <cstdio>
#include <stack>
using namespace std;
int main(void) {
	int T;
	stack<char> S;
	scanf("%d", &T);
	while (T--) {
		char str[51];
		scanf("%s", str);
		bool check = true;
		for (int i = 0; str[i]; i++) {
			if (str[i] == ')') {
				if (S.empty()) { //�������
					printf("NO\n");
					check = false;
					break;
				}
				else { //�����������
					S.pop();
				}
			}
			else {
				S.push('(');
			}
		}
		if (!S.empty()) {
			printf("NO\n");
		}
		else if (check) {
			printf("YES\n");
		}
		while (!S.empty())
			S.pop();
	}
	return 0;
}