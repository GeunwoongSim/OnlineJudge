#include <cstdio>
int main(void) {
	int t, value[8];
	scanf("%d", &t);
	while (t--) {
		int sum = 0,hp,mp,at,dp;
		for (int i = 0; i < 8; i++) {
			scanf("%d", &value[i]);
		}
		hp = value[0] + value[4];
		if (hp < 1) hp = 1;
		mp = value[1] + value[5];
		if (mp < 1) mp = 1;
		at = value[2] + value[6];
		if (at < 0) at = 0;
		dp = value[3] + value[7];
		sum = hp + 5 * mp + 2 * at + 2 * dp;
		printf("%d\n", sum);
	}
	return 0;
}