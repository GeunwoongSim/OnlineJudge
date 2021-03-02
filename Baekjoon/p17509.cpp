
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;

struct map{
    int D;
    int V;
    int sum;
};

bool cmp(map a,map b){
    return a.D < b.D;
}

int main(void){
    map arr[11];
    int penalty = 0;
    for(int i=0;i<11;i++){
        int inp1,inp2;
        cin >> inp1 >> inp2;
        arr[i].D = inp1;
        arr[i].V = inp2;
        arr[i].sum = inp1;
    }
    
    sort(arr,arr+11,cmp);
    
    for(int i=1;i<11;i++){
        arr[i].sum = arr[i-1].sum + arr[i].D;
    }
    
    for(int i=0;i<11;i++){
        penalty = penalty + arr[i].sum + 20*arr[i].V;
    }
    cout << penalty;
    return 0;
}
