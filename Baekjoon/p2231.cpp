#include <stdio.h>
#include <iostream>
#define MAX 1000001
using namespace std;

int arr[MAX] = {0,};

int func(int number){
    int result = 1;
    while(number/10 != 0){
        number /= 10;
        result += 1;
    }
    return result;
}

int main(void){
    
    for(int i=1;i<MAX;i++){
        int emptyResult = i;
        int num = i;
        for(int l=0;l<func(i);l++){
            emptyResult += num % 10;
            num = num /10;
        }
        if(emptyResult<MAX){
            if(arr[emptyResult]==0){
                arr[emptyResult] = i;
            }
        }
    }
    int input;
    cin >> input;
    cout << arr[input];
    
    return 0;
}
