#include <cstdio>
int Array[27];
int main(void) {
	char S[101];
	scanf("%s", S);
	for (int i = 0; S[i]; i++)
		Array[S[i] - 'a']++;
	for (int i = 0; i < 26; i++) {
		printf("%d ", Array[i]);
	}
	return 0;
}