#include <stdio.h>
#include <iostream>
using namespace std;
#define max 400
int map[max][max] = {0,};
int main(void){
    int TC;
    cin >> TC;
    for(int i=1;i*2<=4*TC-3;i=i+2){
        for(int l=i;l<4*TC-3-i;l++){
            map[i][l] = 1;
            map[l][i] = 1;
            map[4*TC-3-1-i][l] = 1;
            map[l][4*TC-3-1-i] = 1;
        }
    }
    for(int i=0;i<4*TC-3;i++){
        for(int l=0;l<4*TC-3;l++){
            if (map[i][l] == 0) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << "\n";
    }
    return 0;
}
