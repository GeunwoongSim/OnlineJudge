
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int N;
int P[1001];
int dp[1001][1001];

int func(int index, int n){
    if(n==N){ //최대 카드 장수 획득
        return 0;
    }
    if(index==N+1){ //끝까지 도달 했는데 최대 카드 장수를 만들지 못함
        return -1;
    }
    
    if(dp[index][n] != 0){
        return dp[index][n];
    }
    int result = func(index+1,n); //현재 카드팩 패스
    if(N-n>=index){
        result = max(result,func(index,n+index)+P[index]);
    }
    
    dp[index][n] = result;
    return result;
}

int main(void){
    scanf("%d",&N);
    for(int n=1;n<=N;n++){
        scanf("%d",&P[n]);
    }
    printf("%d",func(1,0));
    return 0;
}
