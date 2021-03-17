#include <stdio.h>

int main(void) {
	int num;
	char dir[50][51];
	char result[51];
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", dir[i]);
	}
	int i = 0;
	while (dir[0][i] != '\0') {
		char com = dir[0][i]; //처음 문장의 한글자
		int check = 0;
		for (int l = 1; l < num; l++) { //순회 하면서 해당 글자와 다른 친구가 있는지 찾음
			if (com != dir[l][i]) {
				check++;
				break;
			}
		}
		if (!check) {
			result[i] = com;
		}
		else {
			result[i] = '?';
		}
		i++;
	}
	result[i] = '\0';
	printf("%s", result);
	return 0;
}