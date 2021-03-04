
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct inp{
    int start;
    int end;
};

inp arr[100000];

bool cmp(inp a, inp b){
    if(a.end == b.end){
        return a.start < b.start;
    }
    return a.end < b.end;
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
    int x = 0,result = 0;
    for(int i=0;i<N;i++){
        if(x<=arr[i].start){
            x = arr[i].end;
            result++;
        }
    }
    cout << result;
    
    return 0;
}
