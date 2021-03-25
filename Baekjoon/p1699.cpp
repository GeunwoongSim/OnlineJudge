//https://www.acmicpc.net/problem/1699
#include <stdio.h>
#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int dp[100001];

int main(void){
    int N;
    scanf("%d",&N);
    for(int i=1;i<100001;i++){
        dp[i] = i; //전부 1로 구성될 경우
        for(int l=1;l*l<100001;l++){
            if(i-l*l >= 0){ //
                dp[i] = min(dp[i],dp[i-l*l]+1); //기존의 값과 l의 제곱수를 1개 가지는 경우 중 작은거 선택
            }
            
        }
    }
    printf("%d",dp[N]);
    return 0;
}
