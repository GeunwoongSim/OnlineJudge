#include <iostream>
using namespace std;

int main(void){
    int TC;
    cin >> TC;
    for (int i=0;i<TC;i++){
        for(int l=0;l<=2*TC;l++){
            if (l-i==TC-1){
                cout << "*\n";
                break;
            }
            else if(i+l==TC-1){
                cout << "*";
            }
            else{
                cout << " ";
            }
        }
    }
    return 0;
}
