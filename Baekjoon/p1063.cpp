#include <cstdio>
char kingposition[3], stoneposition[3], move[3], movePosition[2];
int main(void) {
	int T;
	scanf("%s %s %d", kingposition, stoneposition, &T);
	while (T--) {
		scanf("%s", move);
		if (move[0] == 'R') {
			if (move[1] == 'T') { //������ �� �밢������
				movePosition[0] = kingposition[0] + 1;
				movePosition[1] = kingposition[1] + 1;
				//�̶� �ش� ��ġ�� ���� �ִ���
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
					if (movePosition[0] < 'H' && movePosition[1] < '8') { //���� ü���Ǿ��̴�.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] += 1;
						stoneposition[1] += 1;
					}
					else { //���� ������ ���� -> ����

					}
				}
				else { //���̾���
					if (movePosition[0] <= 'H' && movePosition[1] <= '8') { //ü���Ǿ�
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //ü���� �� -> ����

					}
				}
				//
			}
			else if (move[1] == 'B') { //������ �Ʒ� �밢������
				movePosition[0] = kingposition[0] + 1;
				movePosition[1] = kingposition[1] - 1;
				//�̶� �ش� ��ġ�� ���� �ִ���
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
					if (movePosition[0] < 'H' && movePosition[1] > '1') { //���� ü���Ǿ��̴�.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] += 1;
						stoneposition[1] -= 1;
					}
					else { //���� ������ ���� -> ����

					}
				}
				else { //���̾���
					if (movePosition[0] <= 'H' && movePosition[1] >='1') { //ü���Ǿ�
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //ü���� �� -> ����

					}
				}
			}
			else {  //�� ĭ ����������
				movePosition[0] = kingposition[0] + 1;
				movePosition[1] = kingposition[1];
				//�̶� �ش� ��ġ�� ���� �ִ���
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
					if (movePosition[0] < 'H') { //���� ü���Ǿ��̴�.
						kingposition[0] = movePosition[0];
						stoneposition[0] += 1;
					}
					else { //���� ������ ���� -> ����

					}
				}
				else { //���̾���
					if (movePosition[0] <= 'H') { //ü���Ǿ�
						kingposition[0] = movePosition[0];
					}
					else { //ü���� �� -> ����

					}
				}
			}
		}
		else if(move[0] == 'L'){ 
			if (move[1] == 'T') { //���� �� �밢������
				movePosition[0] = kingposition[0] - 1;
				movePosition[1] = kingposition[1] + 1;
				//�̶� �ش� ��ġ�� ���� �ִ���
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
					if (movePosition[0] > 'A' && movePosition[1] < '8') { //���� ü���Ǿ��̴�.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] -= 1;
						stoneposition[1] += 1;
					}
					else { //���� ������ ���� -> ����

					}
				}
				else { //���̾���
					if (movePosition[0] >= 'A' && movePosition[1] <= '8') { //ü���Ǿ�
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //ü���� �� -> ����

					}
				}
			}
			else if (move[1] == 'B') { //���� �Ʒ� �밢������
				movePosition[0] = kingposition[0] - 1;
				movePosition[1] = kingposition[1] - 1;
				//�̶� �ش� ��ġ�� ���� �ִ���
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
					if (movePosition[0] > 'A' && movePosition[1] > '1') { //���� ü���Ǿ��̴�.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] -= 1;
						stoneposition[1] -= 1;
					}
					else { //���� ������ ���� -> ����

					}
				}
				else { //���̾���
					if (movePosition[0] >= 'A' && movePosition[1] >= '1') { //ü���Ǿ�
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //ü���� �� -> ����

					}
				}
			}
			else { //�� ĭ ��������
				movePosition[0] = kingposition[0] - 1;
				movePosition[1] = kingposition[1];
				//�̶� �ش� ��ġ�� ���� �ִ���
				if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
					if (movePosition[0] > 'A') { //���� ü���Ǿ��̴�.
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
						stoneposition[0] -= 1;
						stoneposition[1] += 0;
					}
					else { //���� ������ ���� -> ����

					}
				}
				else { //���̾���
					if (movePosition[0] >= 'A') { //ü���Ǿ�
						kingposition[0] = movePosition[0];
						kingposition[1] = movePosition[1];
					}
					else { //ü���� �� -> ����

					}
				}
			}
		}
		else if (move[0] == 'B') { //�� ĭ �Ʒ���
			movePosition[0] = kingposition[0];
			movePosition[1] = kingposition[1] - 1;
			//�̶� �ش� ��ġ�� ���� �ִ���
			if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
				if (movePosition[1] > '1') { //���� ü���Ǿ��̴�.
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
					stoneposition[0] += 0;
					stoneposition[1] -= 1;
				}
				else { //���� ������ ���� -> ����
	
				}
			}
			else { //���̾���
				if (movePosition[1] >= '1') { //ü���Ǿ�
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
				}
				else { //ü���� �� -> ����
	
				}
			}
		}
		else if (move[0] == 'T') { //�� ĭ ����
			movePosition[0] = kingposition[0];
			movePosition[1] = kingposition[1] + 1;
			//�̶� �ش� ��ġ�� ���� �ִ���
			if (movePosition[0] == stoneposition[0] && movePosition[1] == stoneposition[1]) { //��������
				if (movePosition[1] < '8') { //���� ü���Ǿ��̴�.
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
					stoneposition[0] += 0;
					stoneposition[1] += 1;
				}
				else { //���� ������ ���� -> ����
	
				}
			}
			else { //���̾���
				if (movePosition[1] <= '8') { //ü���Ǿ�
					kingposition[0] = movePosition[0];
					kingposition[1] = movePosition[1];
				}
				else { //ü���� �� -> ����

				}
			}
		}
	}
	printf("%c%c\n", kingposition[0], kingposition[1]);
	printf("%c%c\n", stoneposition[0], stoneposition[1]);
	return 0;
}