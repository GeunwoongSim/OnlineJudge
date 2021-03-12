
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct data {
    int x;
    int c;
};

struct cmp {
    bool operator()(data a, data b){
        return a.c < b.c;
    }
};

priority_queue<data,vector<data>,cmp> inpArr;

int main(void){
    long long L, N, rF, rB;
    cin >> L >> N >> rF >> rB;
    for(int i=0;i<N;i++){
        int x,c;
        cin >> x >> c;
        inpArr.push({x,c});
    }
    int curPoi = 0;
    long long sum = 0;
    while(!inpArr.empty()){
        data a = inpArr.top();
        if(curPoi < a.x){ //쉴 수 있는 쉼터
            sum = sum + ((a.x-curPoi)*rF - (a.x-curPoi)*rB)*a.c;
            curPoi = a.x;
        }
        inpArr.pop();
    }
    cout << sum;
    return 0;
}
