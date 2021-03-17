#include <cstdio>
bool number[250000] = {true,true,false,false,};
int sosu[250000], sosuIndex = 0;
void sosu_check() {
	for (int i = 2; i <= 246912; i++)
		for (int l = 2; i*l <= 246912; l++) 
			number[i*l] = true;
		
	for (int i = 2; i <= 246912; i++)
		if (!number[i]) {
			sosu[sosuIndex] = i;
			sosuIndex++;
		}
}
int main(void) {
	sosu_check();
	while (true) {
		int num,sum=0;
		scanf("%d", &num);
		if (num == 0)
			break;
		for (int i = 0; i < sosuIndex; i++) {
			if (num < sosu[i] && 2 * num >= sosu[i]) {
				sum++;
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}