
#include <stdio.h>
#include <iostream>
using namespace std;

int map[2188][2188];
int result[3];
void calMap(int x0, int y0, int xi, int yi){
    bool check = true;
    int num = map[y0][x0];
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
    if(check){ //전부 같은 값으로 되어있음
        result[num+1]++;
    }else{
        int xlength = (xi-x0)/3;
        int ylength = (yi-y0)/3;
        for(int i=0;i<3;i++){
            for(int l=0;l<3;l++){
                calMap(x0+xlength*l, y0+ylength*i, x0+xlength*(l+1), y0+ylength*(i+1));
            }
        }
    }
}

int main(void){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        for(int l=0;l<N;l++){
            cin >> map[i][l];
        }
    }
    calMap(0, 0, N, N);
    for(int i=0;i<3;i++){
        cout << result[i] << "\n";
    }
    return 0;
}
