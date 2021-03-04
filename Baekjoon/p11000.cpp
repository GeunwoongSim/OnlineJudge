
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

struct inp{
    int start;
    int end;
};

inp arr[200000];
int result = 1;
priority_queue<int,vector<int>,greater<int>> que;

bool cmp(inp a, inp b){
    if(a.start == b.start){
        return a.end < b.end;
    }
    return a.start < b.start;
}

int main(void){
    int N, inp1, inp2;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> inp1 >> inp2;
        arr[i].start = inp1;
        arr[i].end = inp2;
    }
    sort(arr,arr+N,cmp);
    que.push(arr[0].end);
    for(int i=1;i<N;i++){
        if(que.top() <= arr[i].start){
            que.pop();
            que.push(arr[i].end);
        }
        else{
            que.push(arr[i].end);
            result++;
        }
    }
    cout << result;
    return 0;
}
