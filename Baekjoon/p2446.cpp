
#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    int TC,i=0;
    bool tri = true;
    cin >> TC;
    do {
        for(int l=0;l<i;l++){
            cout << " ";
        }
        for(int l=0;l<TC*2-(2*i+1);l++){
            cout << "*";
        }
        cout << "\n";
        if (i==TC-1){
            tri = !tri;
        }
        if (tri){
            i++;
        }else{
            i--;
        }
    }while(i>=0);
    return 0;
}
