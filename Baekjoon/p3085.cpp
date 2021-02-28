#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 51

char map[MAX][MAX];
int num,result = 0;

void switchMap(int x1, int y1, int x2, int y2){
    char empty = map[x1][y1];
    map[x1][y1] = map[x2][y2];
    map[x2][y2] = empty;
}

void compareResult(int comNum){
    if(result < comNum){
        result = comNum;
    }
}

void calResult(){ //전체 순회 하면서 개수 찾기
    //함수에서 사용하는 변수 - 사용하기 전에 초기화 진행
    int check=1;
    char type;
    //행 계산
    for(int i=0;i<num;i++){
        check = 1; //연속 개수
        type = map[i][0]; //유형 : C P Z Y
        for(int l=1;l<num;l++){
            if(type != map[i][l]){ //현재 가리키는 값과 기존 유형이 다름 - 갱신
                compareResult(check);
                check = 1;
                type = map[i][l];
            }else{ //유형이 같음 연속 개수 +1
                check++;
            }
        }
        //마지막까지 값을 갱신 하지않고 가지고 있는경우 반복이 끝나고 비교
        compareResult(check);
    }
    //열 계산
    for(int i=0;i<num;i++){
        check = 1;
        type = map[0][i];
        for(int l=1;l<num;l++){
            if(type != map[l][i]){
                compareResult(check);
                check = 1;
                type = map[l][i];
            }else{
                check++;
            }
        }
        compareResult(check);
    }
}
int main(void){
    //입력
    scanf("%d", &num);
    for(int i=0;i<num;i++){
        for(int l=0;l<num;l++){
            scanf(" %c", &map[i][l]);
        }
    }
    //결과도출
    for(int i=0;i<num;i++){
        for(int l=0;l<num;l++){
            if(l!=num-1){ //본인과 오른쪽 비교 - 제약사항 : 가장 오른쪽이면 불가
                if(map[i][l] != map[i][l+1]){
                    //1.교환 2.확인 3.복구
                    switchMap(i, l, i, l+1);
                    calResult();
                    switchMap(i, l, i, l+1);
                }
            }
            if(l!=0){ //본인과 왼쪽 비교 - 제약사항 : 가장 왼쪽이면 불가
                if(map[i][l] != map[i][l-1]){
                    //1.교환 2.확인 3.복구
                    switchMap(i, l, i, l-1);
                    calResult();
                    switchMap(i, l, i, l-1);
                }
            }
            if(i!=num-1){ //본인과 아래쪽 비교 - 제약사항 : 가장 아래쪽이면 불가
                if(map[i][l] != map[i+1][l]){
                    //1.교환 2.확인 3.복구
                    switchMap(i, l, i+1, l);
                    calResult();
                    switchMap(i, l, i+1, l);
                }
            }
            if(i!=0){ //본인과 위쪽 비교 - 제약사항 : 가장 위쪽이면 불가
                if(map[i][l] != map[i-1][l]){
                    //1.교환 2.확인 3.복구
                    switchMap(i, l, i-1, l);
                    calResult();
                    switchMap(i, l, i-1, l);
                }
            }
        }
    }
    printf("%d",result);
    return 0;
}
