//https://www.acmicpc.net/problem/11726
#include <stdio.h>
#include <iostream>
using namespace std;
#define NMax 1001

int dp[NMax][2];
int N;
int func(int n, int type){
    if(n==N){
        return 1;
    }
    if(dp[n][type] != -1){
        return dp[n][type]%10007;
    }
    
    int result = func(n+1,1)%10007;
    if(N-n>=2){
        result = ((result%10007) + (func(n+2,0)%10007))%10007;
    }
    dp[n][type] = result;
    
    return result;
}

int main(void){
    cin >> N;
    for(int n=0;n<N;n++){
        dp[n][0] = -1;
        dp[n][1] = -1;
    }
    cout << ((func(2,0)%10007) + (func(1,1)%10007))%10007;
    return 0;
}
