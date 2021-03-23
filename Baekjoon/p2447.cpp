
#include <stdio.h>
#include <iostream>
using namespace std;
bool map[6600][6600];
void star(int x0, int y0, int length){
    if(length==1){
        map[y0][x0] = true;
    }
    else{
        int L = length/3;
        for(int y=0;y<3;y++){
            for(int x=0;x<3;x++){
                if(x==1 && y==1){
                    continue;
                }
                star(x0+L*x,y0+L*y,L);
            }
        }
    }
}

int main(void){
    int N;
    cin >> N;
    star(0,0,N);
    for(int y=0;y<N;y++){
        for(int x=0;x<N;x++){
            if(map[y][x]){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
