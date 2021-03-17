#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

struct inpType {
    int Ai;
    int Bi;
};

inpType inpArr[21];
long long empArr[21];

bool cmp (inpType a, inpType b){
    return a.Ai > b.Ai;
}

int main(void){
    long long L, W, H; //박스 크기
    cin >> L >> W >> H;
    int N;
    cin >> N;
    for(int i=0;i<N;i++){
        cin >> inpArr[i].Ai >> inpArr[i].Bi;
    }
    sort(inpArr,inpArr+N,cmp); //큰 큐브가 먼저 오게 정렬
    for(int i=0;i<N;i++){
        long long refValue = pow(2, inpArr[i].Ai); // 확인할 큐브의 길이
        long long l = L / refValue;
        long long w = W / refValue;
        long long h = H / refValue;
        long long emp = l * w * h; //확인할 큐브가 들어가는 개수
        for(int l=0;l<i;l++){ //기존에 넣었던 큐브를 현재 큐브로 치환 후 계산
            long long num = pow(2,inpArr[l].Ai) / refValue;
            num = pow(num,3);
            emp = emp - num * empArr[l]; //이전에 사용한 큐브의 구역에 들어가므로 해당 크기 만큼 빼줌
        }
        if(emp <= inpArr[i].Bi){ //최대치보다 작거나 같음 - 해당 개수 만큼 사용
            empArr[i] = emp;
        }
        else{ //최대치보다 많이 필요 - 최대치 만큼 사용
            empArr[i] = inpArr[i].Bi;
        }
    }
    long long compare = L * W * H;
    long long result = 0;
    long long sum = 0;
    for(int i=0;i<N;i++){
        sum = sum + pow(pow(2,inpArr[i].Ai),3) * empArr[i];
        result = result + empArr[i];
    }
    if(compare != sum){
        cout << -1;
    }
    else{
        cout << result;
    }
    return 0;
}
