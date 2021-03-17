#include <cstdio>
#include <queue>
using namespace std;
#define max 101
struct minimap {
	int x;
	int y;
	int color;
};
int map1[max][max], map2[max][max]; //1은 적녹색약X 2는 적녹색약
int main(void) {
	queue<minimap> Q;
	int N,map1Num=0,map2Num=0;
	scanf("%d", &N);
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			char str;
			scanf(" %c", &str);
			if (str == 'R') {
				map1[y][x] = 1;
				map2[y][x] = 1;
			}
			else if (str == 'G') {
				map1[y][x] = 2;
				map2[y][x] = 1;
			}
			else {
				map1[y][x] = 3;
				map2[y][x] = 2;
			}
		}
	}
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (map1[y][x] == 0)
				continue;
			map1Num++;
			Q.push({ x,y,map1[y][x] });
			map1[y][x] = 0;
			while (!Q.empty()) {
				struct minimap current = Q.front();
				Q.pop();
				if (current.y > 0) { //위 판단
					if (current.color == map1[current.y - 1][current.x]) {
						Q.push({ current.x,current.y-1,current.color});
						map1[current.y - 1][current.x] = 0;
					}
				}
				if (current.x > 0) { //왼쪽
					if (current.color == map1[current.y][current.x-1]) {
						Q.push({ current.x-1,current.y,current.color });
						map1[current.y][current.x-1] = 0;
					}
				}
				if (current.x < N - 1) { //오른쪽
					if (current.color == map1[current.y][current.x + 1]) {
						Q.push({ current.x + 1,current.y,current.color });
						map1[current.y][current.x + 1] = 0;
					}
				}
				if (current.y < N - 1) { //아래쪽
					if (current.color == map1[current.y+1][current.x]) {
						Q.push({ current.x,current.y + 1,current.color });
						map1[current.y + 1][current.x] = 0;
					}

				}
			}
		}
	}
	printf("%d ", map1Num);
	for (int y = 0; y < N; y++) {
		for (int x = 0; x < N; x++) {
			if (map2[y][x] == 0)
				continue;
			map2Num++;
			Q.push({ x,y,map2[y][x] });
			map2[y][x] = 0;
			while (!Q.empty()) {
				struct minimap current = Q.front();
				Q.pop();
				if (current.y > 0) { //위 판단
					if (current.color == map2[current.y - 1][current.x]) {
						Q.push({ current.x,current.y - 1,current.color });
						map2[current.y - 1][current.x] = 0;
					}
				}
				if (current.x > 0) { //왼쪽
					if (current.color == map2[current.y][current.x - 1]) {
						Q.push({ current.x - 1,current.y,current.color });
						map2[current.y][current.x - 1] = 0;
					}
				}
				if (current.x < N - 1) { //오른쪽
					if (current.color == map2[current.y][current.x + 1]) {
						Q.push({ current.x + 1,current.y,current.color });
						map2[current.y][current.x + 1] = 0;
					}
				}
				if (current.y < N - 1) { //아래쪽
					if (current.color == map2[current.y + 1][current.x]) {
						Q.push({ current.x,current.y + 1,current.color });
						map2[current.y + 1][current.x] = 0;
					}

				}
			}
		}
	}
	printf("%d", map2Num);
	return 0;
}