#include <cstdio>
char str[103];
int main(void) {
	int index = 0;
	/*
	fgets(str,300,stdin); �Ʒ��ҽ� ��� ����ϸ� ����
	���� \0 �� ���Ƿ� for(int i =0;str[i];i++) ��밡��
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
	} ���
	if (str[i + 1] == 'p' && str[i + 2] == str[i]) {
		i +=2;
	} ����ϸ�  �Ʒ��� �ҽ��� �ʿ������
	*/
	for (int i = 0; i < index; i++) {
		if (str[i] != '_')
			printf("%c", str[i]);
	}
	return 0;
}