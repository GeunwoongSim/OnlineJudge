
#include <stdio.h>
#include <iostream>
using namespace std;

int compare(int TC, int i) {
    return i<TC ? i+1 : 2*TC-1-i;
}

int main(void){
    int TC;
    cin >> TC;
    for(int i=0;i<2*TC-1;i++){
        for(int l=0;l<compare(TC,i);l++){
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
