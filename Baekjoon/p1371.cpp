#include <cstdio>

int main(void) {
	int result = 0;
	int al[26] = { 0, };
	while (1) {
		char ch;
		ch = getchar();
		if (ch == '\n' || ch == ' ')
			continue;
		else if (ch == '\0' || ch == EOF)
			break;
		else {
			al[ch - 'a']++;
			if (result < al[ch - 'a'])
				result = al[ch - 'a'];
		}
	}
	/*
	while(1){
		char ch = getchar();
		if(ch == EOF)
			break;
	}����
	while((ch = getchar()) != EOF){
	}Ȱ��
	*/
	/*
	al[ch - 'a']++;
	if (result < al[ch - 'a'])
		result = al[ch - 'a'];
	�̰������� <algorithm> max_element(al,al+27)���� ���� ���� ���� ������ ���� �� ����
	*/
	/*
	al[ch-'a'] ó�� �������� �迭�� ���ݴ� ũ�� ��Ƽ� al[ch]++�� �Ҽ������� 
	�̶� max_element�� max_element(al+'a', al+'z'+1)�� ����ش�
	*/
	for (int i = 0; i < 26; i++) {
		if (al[i] == result) {
			printf("%c", i+'a');
		}
	}
	return 0;
}