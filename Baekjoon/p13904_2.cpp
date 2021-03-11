#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

priority_queue<int> inpArr[1000];
int main(void){
    int N, day = 0;
    cin >> N;
    for(int i=0;i<N;i++){
        int d, w;
        cin >> d >> w;
        inpArr[d].push(w);
        if(day < d){
            day = d;
        }
    }
    
    int sum = 0;
    int maxI = day;
    //끝날부터 앞으로 오면서 과제 선택
    for(;day>0;day--){
        int maxW = 0;
        int maxIndex = 0;
        for(int i=maxI;i>=day;i--){
            if(inpArr[i].empty()){
                continue;
            }
            else if(maxW < inpArr[i].top()){
                maxW = inpArr[i].top();
                maxIndex = i;
            }
        }
        if(maxW != 0){
            sum = sum + maxW;
            inpArr[maxIndex].pop();
        }
    }
    cout << sum;
    return 0;
}
