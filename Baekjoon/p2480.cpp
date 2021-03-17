#include <cstdio>
int main(void) {
	int dice1, dice2, dice3;
	scanf("%d %d %d", &dice1, &dice2, &dice3);
	int result = 0; //»ó±Ý
	if (dice1 == dice2 && dice2 == dice3) {
		result = 10000 + dice1 * 1000;
	}
	else if ((dice1 == dice2 && dice2 != dice3) || (dice2 == dice3 && dice1 != dice2)) {
		result = 1000 + dice2 * 100;
	}
	else if (dice1 == dice3 && dice1 != dice2) {
		result = 1000 + dice1 * 100;
	}
	else {
		if (dice1 > dice2 && dice1 > dice3) {
			result = dice1 * 100;
		}
		else if (dice2 > dice1 &&dice2 > dice3) {
			result = dice2 * 100;
		}
		else {
			result = dice3 * 100;
		}
	}
	printf("%d", result);
	return 0;
}