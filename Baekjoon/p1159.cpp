#include <stdio.h>

int Array[26];

int main(void) {
	int num;
	scanf("%d", &num);
	for (int i = 0; i < num; i ++) {
		char human[31];
		scanf("%s", human);
		Array[human[0] - 'a']++;
	}
	int re = 0;
	for (int i = 0; i < 26; i++) {
		if (Array[i] >= 5) {
			printf("%c", 'a' + i);
			re++;
		}
	}
	if (!re) {
		printf("PREDAJA");
	}
	return 0;
}