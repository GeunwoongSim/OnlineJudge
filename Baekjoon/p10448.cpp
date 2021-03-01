
#include <stdio.h>
#include <iostream>

using namespace std;

int tnArr[1001] = {0,};
int result[1001] = {0,};

int main(void){
   
    //Tn 배열 값
    for(int i=1;i<1001;i++){
        tnArr[i] = i*(i+1)/2;
    }
    
    //결과 값 도출
    for(int a=1;a<1001;a++){
        if(tnArr[a]>1000){
            break;
        }
        for(int b=1;b<1001;b++){
            if(tnArr[a]+tnArr[b]>1000){
                break;
            }
            for(int c=1;c<1001;c++){
                if(tnArr[a]+tnArr[b]+tnArr[c]>1000){
                    break;
                }
                result[tnArr[a]+tnArr[b]+tnArr[c]] = 1;
            }
        }
    }

    //input
    int TC,input;
    cin >> TC;
    for(int i=0;i<TC;i++){
        cin >> input;
        cout << result[input] << "\n";
    }
    return 0;
}
