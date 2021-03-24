
#include <stdio.h>
#include <iostream>
using namespace std;
#define NMax 1000001

int map[NMax][2];
int N;

int func(int n, int type){
    
    if(n == N){
        return 1;
    }
    if(map[n][type] != -1){
        return map[n][type];
    }
    
    int result = func(n+1,1)%15746;
    if(N-n >= 2){
        result = ((result%15746)+(func(n+2,0)%15746))%15746;
    }
    map[n][type] = result;
    return result;
}

int main(void){
    cin >> N;
    for(int n=0;n<N;n++){
        map[n][0] = -1;
        map[n][1] = -1;
    }
    if(N == 1){
        cout << 1;
    }
    else{
        cout << ((func(2,0)%15746)+(func(1,1)%15746))%15746;
    }
    return 0;
}

