#include <iostream>
using namespace std;

int main(void){
    int TC;
    cin >> TC;
    for(int i=0;i<TC;i++){
        for(int l=0;l<TC-i-1;l++){
            cout << " ";
        }
        for(int l=TC-i-1;l<TC+i;l++){
            if(TC%2 != (i+l)%2){
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
