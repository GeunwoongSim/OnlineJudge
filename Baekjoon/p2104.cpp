
#include <stdio.h>
#include <iostream>
using namespace std;

long long A[100000];

long long func (int s, int e){
//    cout << "s = " << s << " e = " << e << "\n";
    if(s==e){
        return A[s]*A[s];
    }
    int mid = (s+e)/2;
    long long result = 0;
    result = max(func(s,mid),func(mid+1,e));
    long long V = A[mid], min = A[mid], l = mid, r = mid;
    while(l>s || r<e){
        long long p = l>s ? A[l-1] : -1; //왼쪽으로 갔을때 값
        long long q = r<e ? A[r+1] : -1; //오른쪽으로 갔을때 값
        if(p >= q){ //왼쪽으로 감
            V = V + p;
            if(min > p && p!= -1){
                min = p;
            }
            l--;
        }
        else{ //오른쪽으로 감
            V = V + q;
            if(min > q && q!= -1){
                min = q;
            }
            r++;
        }
        result = max(result,V*min);
    }
    return result;
}

int main(void){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> A[i];
    }
    cout << func(0,N-1);
    
    return 0;
}
