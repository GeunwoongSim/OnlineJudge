
#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    int TC;
    cin >> TC;
    for(int i=0;i<TC;i++){
        for(int l=0;l<i+TC;l++){
            if((i+l==TC-1)||(l-i==TC-1)||(i==TC-1)){
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
