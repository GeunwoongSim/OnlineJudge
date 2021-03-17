#include <cstdio>
int main(void) {
	int arr[2][9] = { 0, }, team1 = 0, team2 = 0;
	bool check = false;
	for (int y = 0; y < 2; y++) {
		for (int x = 0; x < 9; x++) {
			scanf("%d", &arr[y][x]);
		}
	}
	for (int x = 0; x < 9; x++) {
		team1 += arr[0][x];
		if (team1 > team2)
			check = true;
		team2 += arr[1][x];
	}
	check ? printf("Yes") : printf("No");
	return 0;
}