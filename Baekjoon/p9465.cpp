
#include <stdio.h>
#include <iostream>
using namespace std;

int map[200000][2];
int memory[200000][3];

int func(int index, int check, int N){
    if(index == N){
        return 0;
    }
    
    if(memory[index][check] != -1){
        return memory[index][check];
    }
    
    int result = func(index+1,0,N);
    if(check != 1){ //위 스티커를 떼지 않음
        result = max(result, func(index+1,1,N)+map[index][0]);
    }
    if(check != 2){ //아래 스티커를 떼지 않음
        result = max(result, func(index+1,2,N)+map[index][1]);
    }
    
    memory[index][check] = result;
    
    return result;
}

int main(void){
    int TC;
    cin >> TC;
    for(int tc=0;tc<TC;tc++){
        int N;
        cin >> N;
        for(int i=0;i<2;i++){
            for(int n=0;n<N;n++){
                cin >> map[n][i];
            }
        }
        for(int n=0;n<N;n++){
            memory[n][0] = -1;
            memory[n][1] = -1;
            memory[n][2] = -1;
        }
        cout << func(0,0,N) << "\n";
    }
    return 0;
}
