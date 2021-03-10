
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int inpArr[10000];

bool cmp(int a, int b){
    return a>b;
}

int main(void){
    int N,K;
    cin >> N >> K;
    for(int i=0;i<N;i++){
        cin >> inpArr[i];
    }
    if(N<=K){ //집중국의 수가 센서보다 같거나 많으면 거리는 0 고정
        cout << 0;
        return 0;
    }
    sort(inpArr,inpArr+N);
    int result = inpArr[N-1] - inpArr[0];
    for(int i=0;i<N-1;i++){
        inpArr[i] = inpArr[i+1] - inpArr[i];
    }
    sort(inpArr,inpArr+N-1,cmp);
    for(int i=0;i<K-1;i++){
        result = result - inpArr[i];
    }
    cout << result;
    return 0;
}
