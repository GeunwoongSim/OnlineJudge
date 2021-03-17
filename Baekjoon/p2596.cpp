#include <cstdio>
char Array[61];
char al[8] = {'A','B','C','D','E','F','G','H'};
char map[8][6] = {
	{'0','0','0','0','0','0'}, //A
	{'0','0','1','1','1','1'}, //B
	{'0','1','0','0','1','1'}, //C
	{'0','1','1','1','0','0'}, //D
	{'1','0','0','1','1','0'}, //E
	{'1','0','1','0','0','1'}, //F
	{'1','1','0','1','0','1'}, //G
	{'1','1','1','0','1','0'}  //H
};
char result[6];
int main(void) {
	int resultIndex = 0,num;
	bool check;
	scanf("%d\n%s", &num,Array);
	for (int i = 0; i < num*6; i= i+6) {
		int compareArray[8] = { 0, }, min = 7, index = 0; //비교했을때 다른 개수
		check = true;
		for (int l = 0; l < 8; l++) {
			if (map[l][0] != Array[i])
				compareArray[l]++;
			if (map[l][1] != Array[i + 1])
				compareArray[l]++;
			if (map[l][2] != Array[i + 2])
				compareArray[l]++;
			if (map[l][3] != Array[i + 3])
				compareArray[l]++;
			if (map[l][4] != Array[i + 4])
				compareArray[l]++;
			if (map[l][5] != Array[i + 5])
				compareArray[l]++;
		}
		for (int l = 0; l < 8; l++) {
			if (min == compareArray[l]) {
				check = false; //중복값 존재
			}
			else if (min > compareArray[l]) { //새로운 값으로 엎음
				min = compareArray[l];
				index = l;
				check = true;
			}
		}
		if (check) { //유일 최소값존재 - 잘못옴(유추가능)
			result[resultIndex] = al[index];
			resultIndex++;
		}
		else { //최소값여럿존재 - 잘못옴(유추불가능)
			resultIndex = i / 6 + 1;
			break;
		}
	}
	if (check) {
		for (int i = 0; i < resultIndex; i++)
			printf("%c", result[i]);
	}
	else {
		printf("%d", resultIndex);
	}
	return 0;
}