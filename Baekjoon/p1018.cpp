
#include <stdio.h>
#include <iostream>
using namespace std;

int map[51][51] = {0,};
int result = 65;

void calResult(int x,int y,int N,int M);

int main(void){
    int N, M;
    char input;
    cin >> N >> M;
    for(int i=0;i<N;i++){
        for(int l=0;l<M;l++){
            scanf(" %c",&input);
            map[i][l] = input == 'W' ? 2 : 1;
        }
    }
    
    for(int i=0;i<=N-8;i++){
        for(int l=0;l<=M-8;l++){
            calResult(l, i, N, M);
        }
    }
    cout << result;
    return 0;
}

void calResult(int x,int y,int N,int M){//매개변수 초기 좌표
    int num = 0; //바꿀개수
    for(int i=y;i<y+8;i++){
        for(int l=x;l<x+8;l++){
            if((i+l-x-y)%2 == 1){ //홀수면
                if(map[y][x] == map[i][l]){
                    num++;
                }
            }
            else{
                if(map[y][x] != map[i][l]){
                    num++;
                }
            }
        }
    }
    if(result>num){
        result = num;
    }
    if(result>(64-num)){
        result = 64-num;
    }
}
