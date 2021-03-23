
#include <stdio.h>
#include <iostream>
using namespace std;

char map[65][65];

void calResult(int x0, int y0, int xi, int yi){
    char num = map[y0][x0];
    bool check = true;
    for(int y=y0;y<yi;y++){
        for(int x=x0;x<xi;x++){
            if(num != map[y][x]){
                check = false;
                break;
            }
        }
        if(!check){
            break;
        }
    }
    if(check){
        cout << num;
        return;
    }
    cout << "(";
    int L = (xi-x0)/2;
    calResult(x0+L*0, y0+L*0, x0+L*1, y0+L*1);
    calResult(x0+L*1, y0+L*0, x0+L*2, y0+L*1);
    calResult(x0+L*0, y0+L*1, x0+L*1, y0+L*2);
    calResult(x0+L*1, y0+L*1, x0+L*2, y0+L*2);
    cout << ")";
    return;
}

int main(void){
    int N;
    cin >> N;
    for(int y=0;y<N;y++){
        for(int x=0;x<N;x++){
            cin >> map[y][x];
        }
    }
    calResult(0, 0, N, N);
    
    return 0;
}
