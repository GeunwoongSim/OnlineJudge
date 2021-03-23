
#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;

int N,r,c;
int value = 0,result;

void calResult(int x0,int y0,int xi,int yi){
    
    int L = (xi-x0)/2;
    
    if(L == 0){
        if(x0 == c && y0 == r){
            result = value;
        }
        return;
    }
    
    if(x0+L*0<=c && c<x0+L*1 && y0+L*0<=r && r<y0+L*1){
        calResult(x0+L*0, y0+L*0, x0+L*1, y0+L*1);
    }
    else if (x0+L*1<=c && c<x0+L*2 && y0+L*0<=r && r<y0+L*1){
        value = value + pow(L,2);
        calResult(x0+L*1, y0+L*0, x0+L*2, y0+L*1);
    }
    else if (x0+L*0<=c && c<x0+L*1 && y0+L*1<=r && r<y0+L*2){
        value = value + pow(L,2)*2;
        calResult(x0+L*0, y0+L*1, x0+L*1, y0+L*2);
    }
    else if (x0+L*1<=c && c<x0+L*2 && y0+L*1<=r && r<y0+L*2){
        value = value + pow(L,2)*3;
        calResult(x0+L*1, y0+L*1, x0+L*2, y0+L*2);
    }
    return;
}

int main(void){
    cin >> N >> r >> c;
    int l = pow(2,N);
    calResult(0, 0, l, l);
    cout << result;
    return 0;
}
