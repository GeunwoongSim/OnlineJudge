
#include <stdio.h>
#include <iostream>
using namespace std;

int H[100000];

int calRectArea(int s, int e){ //넓이 반환
    if(s==e){ // 가로: 1 높이: H[S]
        return H[s];
    }
    int mid = (s+e)/2;
    int area = max(calRectArea(s,mid),calRectArea(mid+1,e));
    
    int h = H[mid], l = mid, r = mid;
    while(l>s || r<e){
        int p = l>s ? H[l-1] : -1; //왼쪽으로 확장 높이
        int q = r<e ? H[r+1] : -1; //오른쪽으로 확장 높이
        
        if(p>q){ //왼쪽으로 확장
            h = min(h, p);
            l--;
        }
        else{ //오른쪽으로 확장
            h = min(h,q);
            r++;
        }
        area = max(area, h*(r-l+1));
    }
    return area;
}

int main(void){
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> H[i];
    }
    cout << calRectArea(0,N-1);
    return 0;
}
