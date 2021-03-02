
#include <stdio.h>
#include <iostream>
using namespace std;

int arr[11];

//A(i) 가 A(i-1)의 배수 이므로 큰수부터 나누어 내려옴

int main(void){
    int N, K, result=0;
    cin >> N >> K;
    for(int n=N-1;n>=0;n--){
        cin >> arr[n];
    }
    for(int n=0;n<N;n++){
        result = result + K/arr[n];
        K = K % arr[n];
    }
    cout << result;
    return 0;
}
