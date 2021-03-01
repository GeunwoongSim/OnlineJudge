
#include <stdio.h>
#include <iostream>
using namespace std;

int possibleArr[1000] = {0,};

int main(void){
    //기초적으로 가능한 숫자는 1로 변경(0포함 하지않고 서로다른 3자리의 수)
    for(int i=123;i<1000;i++){
        int a = i/100; //100의 자리
        int b = i/10%10; //10의 자리
        int c = i%10; //1의 자리
        if(a!=0 && b!=0 && c!=0 && a!=b && b!=c && a!=c){
            possibleArr[i] = 1;
        }
    }
    
    int TC;
    int input, comStr, comBal;
    cin >> TC;
    for(int i=0;i<TC;i++){
        cin >> input;
        cin >> comStr >> comBal;
        
        int comA = input/100; //100의 자리
        int comB = input/10%10; //10의 자리
        int comC = input%10; //1의 자리
        
        for(int num=123;num<1000;num++){
            int a = num/100; //100의 자리
            int b = num/10%10; //10의 자리
            int c = num%10; //1의 자리
            
            int str = 0, bal = 0;
        
            if(comA==a){
                str++;
            }else if(comA == b || comA == c){
                bal++;
            }
            
            if(comB==b){
                str++;
            }else if(comB == a || comB == c){
                bal++;
            }
            
            if(comC==c){
                str++;
            }else if(comC == a || comC == b){
                bal++;
            }
            
            if(str!=comStr || bal!=comBal){
                possibleArr[num] = 0;
            }
        }
    }
    
    int result = 0;
    for(int i=123;i<1000;i++){
        if(possibleArr[i]==1){
            result++;
        }
    }
    cout << result;
    return 0;
}
