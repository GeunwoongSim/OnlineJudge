
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int coin[101];
int map[101][10001];
int n;

int cal(int index, int k){ //동전 수를 반환
    if(index == n){
        if(k == 0){
            return 0;
        }
        else{
            return 10001;
        }
    }
    
    if(map[index][k] != -1){
        return map[index][k];
    }
    
    int result = cal(index+1,k); //더이상 coin[index]를 사용하지않음
    if(k >= coin[index]){ //coin[index]를 사용할 수 있음
        result = min(result, cal(index,k-coin[index])+1);
    }
    map[index][k] = result;
    return result;
}
bool cmp (int a, int b){
    return a > b;
}
int main(void){
    for(int y=0;y<101;y++){
        for(int x=0;x<10001;x++){
            map[y][x] = -1;
        }
    }
    
    int k;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> coin[i];
    }
    sort(coin,coin+n, cmp);
    int num = cal(0,k);
    if(num == 10001){
        cout << -1;
    }
    else{
        cout << num;
    }
    return 0;
}
