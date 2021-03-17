#include <cstdio>
bool arr[1001] = { true,true,false,false, };
int sosu[1001], number[3][1001];
int main(void) {
	int sosuIndex = 0;
	for (int i = 2;i<=1000; i++)
		for (int l = 2; i*l <= 1000; l++) {
			arr[i*l] = true;
		}
	for (int i = 0; i < 1000; i++) {
		if (!arr[i]) {
			sosu[sosuIndex] = i;
			sosuIndex++;
		}
	}

	for (int a = 0; a < sosuIndex; a++) {
		for (int b = a; b < sosuIndex; b++) {
			for (int c = b; c < sosuIndex; c++) {
				int num = sosu[a] + sosu[b] + sosu[c];
				if (num < 1000) {
					number[0][num] = sosu[a];
					number[1][num] = sosu[b];
					number[2][num] = sosu[c];
				}
			}
		}
	}

	int T,input;
	scanf("%d", &T);
	while (T--) {
		scanf("%d", &input);
		if (number[0][input] == 0) {
			printf("0\n");
		}
		else {
			printf("%d %d %d\n", number[0][input], number[1][input], number[2][input]);
		}
	}

	return 0;
}