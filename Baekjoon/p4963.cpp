#include <cstdio>
#include <queue>
using namespace std;

struct map {
	int x;
	int y;
};

int land[52][52];

int main(void) {
	queue<map> Q;
	while (true) {
		int w, h,sum=0;
		scanf("%d %d", &w, &h);
		if (w == 0 && h == 0)
			break;
		for (int y = 1; y <= h; y++) {
			for (int x = 1; x <= w; x++) {
				scanf("%d", &land[y][x]);
			}
		}
		for (int y = 1; y <= h; y++) {
			for (int x = 1; x <= w; x++) {
				if (land[y][x] == 1) {
					sum++;
					Q.push({ x,y });
					land[y][x] = 0;
					while (!Q.empty()) {
						int X = Q.front().x;
						int Y = Q.front().y;
						Q.pop();
						land[Y][X] = 0;
						if (land[Y - 1][X]) {
							Q.push({X,Y-1});
							land[Y - 1][X] = 0;
						}
						if (land[Y - 1][X - 1]) {
							Q.push({ X-1,Y - 1 });
							land[Y - 1][X-1] = 0;
						}
						if (land[Y - 1][X + 1]) {
							Q.push({ X + 1,Y - 1 });
							land[Y - 1][X + 1] = 0;
						}
						if (land[Y][X - 1]) {
							Q.push({ X - 1,Y });
							land[Y][X - 1] = 0;
						}
						if (land[Y][X+1]) {
							Q.push({ X + 1,Y });
							land[Y][X + 1] = 0;
						}
						if (land[Y + 1][X - 1]) {
							Q.push({ X - 1,Y + 1 });
							land[Y + 1][X - 1] = 0;
						}
						if (land[Y + 1][X]) {
							Q.push({ X ,Y + 1 });
							land[Y + 1][X] = 0;
						}
						if (land[Y + 1][X + 1]) {
							Q.push({ X + 1,Y + 1 });
							land[Y + 1][X + 1] = 0;
						}
					}
				}
			}
		}
		printf("%d\n", sum);
	}
	return 0;
}