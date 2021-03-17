#include <stdio.h>
#include <string.h>

char color[10][8] = {"black","brown","red","orange" ,"yellow" ,"green" ,"blue" ,"violet" ,"grey" ,"white" };

int main(void) {
	long long result = 0;
	char input[7];
	for (int i = 0; i < 3; i++) {
		scanf("%s", input);
		switch (i) {
		case 0:
			for (int l = 0; l < 10; l++) {
				if (!strcmp(input, color[l])) {
					result += l;
					break;
				}
			}
			result *= 10;
			break;
		case 1:
			for (int l = 0; l < 10; l++) {
				if (!strcmp(input, color[l])) {
					result += l;
					break;
				}
			}
			break;
		case 2:
			for (int l = 0; l < 10; l++) {
				if (!strcmp(input, color[l])) {
					for (int z = 0; z < l; z++) {
						result *= 10;
					}
					break;
				}
			}
			break;
		default:
			break;
		}
	}
	printf("%lld", result);
	return 0;
}