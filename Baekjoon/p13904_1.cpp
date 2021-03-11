#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct data {
    int d;
    int w;
};
data inpArr[1000];

bool cmp(data a, data b){
    if(a.d==b.d){
        return a.w > b.w;
    }
    return a.d > b.d;
}

int main(void){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> inpArr[i].d >> inpArr[i].w;
    }
    
    sort(inpArr,inpArr+N,cmp);
    
    int day = inpArr[0].d;
    int sum = 0;
    while(day>0){
        int maxValue = 0;
        int maxIndex = -1;
        for(int i=0;i<N;i++){ //현재 날짜가 마감 날짜 보다 작으면 반복
            if(day <= inpArr[i].d){
                if(maxValue < inpArr[i].w){
                    maxIndex = i;
                    maxValue = inpArr[i].w;
                }
            }
            else{
                break;
            }
        }
        if(maxIndex != -1){
            sum = sum + maxValue;
            inpArr[maxIndex].w = 0;
        }
        day--;
    }
    cout << sum;
    return 0;
}
