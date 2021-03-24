
#include <stdio.h>
#include <iostream>
using namespace std;

int N;
long long map[91][2];
long long func(int n, int check){ // check : 0이면 이전에 0 1이면 이전에 1
    if(n == N){
        return 1;
    }
    if(map[n][check] != -1){
        return map[n][check];
    }
    long long result = func(n+1,0); //n+1번째에 0을 넣음
    if(check == 0){
        result = result + func(n+1,1);
    }
    map[n][check] = result;
    return result;
}

int main(void){
    for(int i=0;i<91;i++){
        map[i][0] = -1;
        map[i][1] = -1;
    }
    cin >> N;
    cout << func(1,1); //1번째 1 들어감
    return 0;
}
