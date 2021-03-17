#pragma warning(disable:4996)
#include <stdio.h>
#include <queue>
using namespace std;

int map[50][50] = {0,};

struct baechu {
	int x;
	int y;
};

int main(void) {
	int Testcase;
	scanf("%d", &Testcase);
	for (int T = 0; T < Testcase; T++) {
		queue<baechu> que;
		int result = 0;
		int M, N, K;
		scanf("%d %d %d", &M, &N, &K);
		for (int k = 0; k < K; k++) {
			int x, y;
			scanf("%d %d", &x, &y);
			map[y][x] = 1;
		}

		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (map[y][x] == 1) { //���߰� ����
					result++;
					map[y][x] = 0;
					que.push({ x,y });
					while (!que.empty()) {
						int curX = que.front().x;
						int curY = que.front().y;
						que.pop();
						//�� �Ǵ�
						if (curY != 0) {
							if (map[curY - 1][curX] == 1) {
								map[curY - 1][curX] = 0;
								que.push({ curX,curY-1 });
							}
						}
						//������ �Ǵ�
						if (curX != M - 1) {
							if (map[curY][curX+1] == 1) {
								map[curY][curX+1] = 0;
								que.push({ curX+1,curY });
							}
						}
						//���� �Ǵ�
						if (curX != 0) {
							if (map[curY][curX - 1] == 1) {
								map[curY][curX - 1] = 0;
								que.push({ curX - 1,curY });
							}
						}
						//�Ʒ� �Ǵ�
						if (curY != N-1) {
							if (map[curY + 1][curX] == 1) {
								map[curY + 1][curX] = 0;
								que.push({ curX,curY + 1 });
							}
						}
					}
				}
			}
		}
		printf("%d\n", result);
	}
	return 0;
}