
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

int map[1001];

int main(void){
    int N,L;
    int result = 0;
    double x = 0;
    cin >> N >> L;
    for(int i=0;i<N;i++){
        cin >> map[i];
    }
    sort(map,map+N);
    
    for(int i=0;i<N;i++){
        if(x<=map[i]){
            x = map[i]-0.5+L;
            result++;
        }
        else{
            continue;
        }
    }
    
    cout << result;
    return 0;
}
