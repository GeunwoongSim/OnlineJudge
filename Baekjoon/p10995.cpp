#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    int TC;
    cin >> TC;
    for(int i=0;i<TC;i++){
        for(int l=0;l<=2*TC-((i+1)%2);l++){
            if(i%2 == l%2){
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
