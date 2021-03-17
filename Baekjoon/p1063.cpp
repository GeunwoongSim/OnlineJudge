#include <cstdio>
char kingposition[3], stoneposition[3], move[3], movePosition[2];
int main(void) {
	int T;
	scanf("%s %s %d", kingposition, stoneposition, &T);
	while (T--) {
		scanf("%s", move);
		if (move[0] == 'R') {
			if (move[1] == 'T') { //오른쪽 위 대각선으로
				movePosition[0] = kingposition[0] + 1;
				movePosition[1] = kingposition[1] + 1;
				//이때 해당 위치에 돌이 있는지
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
					if (movePosition[0] < 'H' && movePosition[1] < '8') { //돌도 체스판안이다.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] += 1;
						stoneposition[1] += 1;
					}
					else { //돌이 밖으로 나감 -> 무시

					}
				}
				else { //돌이없음
					if (movePosition[0] <= 'H' && movePosition[1] <= '8') { //체스판안
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //체스판 밖 -> 무시

					}
				}
				//
			}
			else if (move[1] == 'B') { //오른쪽 아래 대각선으로
				movePosition[0] = kingposition[0] + 1;
				movePosition[1] = kingposition[1] - 1;
				//이때 해당 위치에 돌이 있는지
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
					if (movePosition[0] < 'H' && movePosition[1] > '1') { //돌도 체스판안이다.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] += 1;
						stoneposition[1] -= 1;
					}
					else { //돌이 밖으로 나감 -> 무시

					}
				}
				else { //돌이없음
					if (movePosition[0] <= 'H' && movePosition[1] >='1') { //체스판안
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //체스판 밖 -> 무시

					}
				}
			}
			else {  //한 칸 오른쪽으로
				movePosition[0] = kingposition[0] + 1;
				movePosition[1] = kingposition[1];
				//이때 해당 위치에 돌이 있는지
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
					if (movePosition[0] < 'H') { //돌도 체스판안이다.
						kingposition[0] = movePosition[0];
						stoneposition[0] += 1;
					}
					else { //돌이 밖으로 나감 -> 무시

					}
				}
				else { //돌이없음
					if (movePosition[0] <= 'H') { //체스판안
						kingposition[0] = movePosition[0];
					}
					else { //체스판 밖 -> 무시

					}
				}
			}
		}
		else if(move[0] == 'L'){ 
			if (move[1] == 'T') { //왼쪽 위 대각선으로
				movePosition[0] = kingposition[0] - 1;
				movePosition[1] = kingposition[1] + 1;
				//이때 해당 위치에 돌이 있는지
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
					if (movePosition[0] > 'A' && movePosition[1] < '8') { //돌도 체스판안이다.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] -= 1;
						stoneposition[1] += 1;
					}
					else { //돌이 밖으로 나감 -> 무시

					}
				}
				else { //돌이없음
					if (movePosition[0] >= 'A' && movePosition[1] <= '8') { //체스판안
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //체스판 밖 -> 무시

					}
				}
			}
			else if (move[1] == 'B') { //왼쪽 아래 대각선으로
				movePosition[0] = kingposition[0] - 1;
				movePosition[1] = kingposition[1] - 1;
				//이때 해당 위치에 돌이 있는지
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
					if (movePosition[0] > 'A' && movePosition[1] > '1') { //돌도 체스판안이다.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] -= 1;
						stoneposition[1] -= 1;
					}
					else { //돌이 밖으로 나감 -> 무시

					}
				}
				else { //돌이없음
					if (movePosition[0] >= 'A' && movePosition[1] >= '1') { //체스판안
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //체스판 밖 -> 무시

					}
				}
			}
			else { //한 칸 왼쪽으로
				movePosition[0] = kingposition[0] - 1;
				movePosition[1] = kingposition[1];
				//이때 해당 위치에 돌이 있는지
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
					if (movePosition[0] > 'A') { //돌도 체스판안이다.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] -= 1;
						stoneposition[1] += 0;
					}
					else { //돌이 밖으로 나감 -> 무시

					}
				}
				else { //돌이없음
					if (movePosition[0] >= 'A') { //체스판안
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //체스판 밖 -> 무시

					}
				}
			}
		}
		else if (move[0] == 'B') { //한 칸 아래로
			movePosition[0] = kingposition[0];
			movePosition[1] = kingposition[1] - 1;
			//이때 해당 위치에 돌이 있는지
			if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
				if (movePosition[1] > '1') { //돌도 체스판안이다.
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
					stoneposition[0] += 0;
					stoneposition[1] -= 1;
				}
				else { //돌이 밖으로 나감 -> 무시
	
				}
			}
			else { //돌이없음
				if (movePosition[1] >= '1') { //체스판안
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
				}
				else { //체스판 밖 -> 무시
	
				}
			}
		}
		else if (move[0] == 'T') { //한 칸 위로
			movePosition[0] = kingposition[0];
			movePosition[1] = kingposition[1] + 1;
			//이때 해당 위치에 돌이 있는지
			if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //돌이있음
				if (movePosition[1] < '8') { //돌도 체스판안이다.
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
					stoneposition[0] += 0;
					stoneposition[1] += 1;
				}
				else { //돌이 밖으로 나감 -> 무시
	
				}
			}
			else { //돌이없음
				if (movePosition[1] <= '8') { //체스판안
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
				}
				else { //체스판 밖 -> 무시

				}
			}
		}
	}
	printf("%c%c\n", kingposition[0], kingposition[1]);
	printf("%c%c\n", stoneposition[0], stoneposition[1]);
	return 0;
}