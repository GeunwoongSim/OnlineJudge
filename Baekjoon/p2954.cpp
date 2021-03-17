#include <cstdio>
char str[103];
int main(void) {
	int index = 0;
	/*
	fgets(str,300,stdin); 아래소스 대신 사용하면 더편리
	끝에 \0 가 들어가므로 for(int i =0;str[i];i++) 사용가능
	*/
	while (1) {
		char ch;
		scanf("%c", &ch);
		if (ch == '\n')
			break;
		str[index++] = ch;
	}
	for (int i = 0; i < index; i++) {
		printf("%c", str[i]);
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
			if (str[i + 1] == 'p' && str[i + 2] == str[i]) {
				str[i + 1] = '_';
				str[i + 2] = '_';
			}
		}
	}
	/*
	if (str[i + 1] == 'p' && str[i + 2] == str[i]) {
		str[i + 1] = '_';
		str[i + 2] = '_';
	} 대신
	if (str[i + 1] == 'p' && str[i + 2] == str[i]) {
		i +=2;
	} 사용하면  아래의 소스도 필요없어짐
	*/
	for (int i = 0; i < index; i++) {
		if (str[i] != '_')
			printf("%c", str[i]);
	}
	return 0;
}