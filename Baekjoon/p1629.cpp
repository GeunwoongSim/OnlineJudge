
#include <stdio.h>
#include <iostream>
using namespace std;

long long cal(long long A, long long B, long long C){
    if(B == 0){
        return 1;
    }
    else if(B == 1){
        return A%C;
    }
    else if(B%2 == 1){
        return ((((cal(A,B/2,C)%C) * (cal(A,B/2,C)%C)) % C)*(A%C)) % C;
    }
    else{
        return ((cal(A,B/2,C)%C) * (cal(A,B/2,C)%C)) % C ;
    }
}

int main(void){
    long long A,B,C;
    cin >> A >> B >> C;
    cout << cal(A,B,C);
    return 0;
}
