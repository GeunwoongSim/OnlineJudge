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
	}보단
	while((ch = getchar()) != EOF){
	}활용
	*/
	/*
	al[ch - 'a']++;
	if (result < al[ch - 'a'])
		result = al[ch - 'a'];
	이과정없이 <algorithm> max_element(al,al+27)으로 가장 많은 원소 개수를 구할 수 있음
	*/
	/*
	al[ch-'a'] 처럼 하지말고 배열을 조금더 크게 잡아서 al[ch]++로 할수도있음 
	이때 max_element는 max_element(al+'a', al+'z'+1)로 잡아준다
	*/
	for (int i = 0; i < 26; i++) {
		if (al[i] == result) {
			printf("%c", i+'a');
		}
	}
	return 0;
}