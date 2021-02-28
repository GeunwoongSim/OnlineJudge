#include <stdio.h>
#include <iostream>
using namespace std;

int iMAX(int number){
    return number==1 ? 1 : 2*number;
}

int main(void){
    int TC;
    cin >> TC;
    for(int i=0;i<iMAX(TC);i++){
        for(int l=0;l<TC;l++){
            if(i%2 == l%2){
                cout << "*";
            }
            else cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
