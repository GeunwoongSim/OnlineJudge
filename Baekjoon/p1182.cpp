
#include <stdio.h>
#include <iostream>
using namespace std;

int inpArr[21] = {};
int N, S,result;
void func(int check,int arr[21],int max_,int sum,int num){ //check는 도착하는 칸
    arr[check] = 1; //합할거임
    num++; //합한 개수 +1
    sum+=inpArr[check]; //합침
    if(max_==num && S==sum){ //합이 원하던 숫자
        result++;
    }
    else if(max_!=num){
        for(int i=check+1;i<N;i++){
            if(arr[i] != 1){ //합치치 않은 거면
                func(i,arr,max_,sum,num);
            }
        }
    }
    arr[check] = 0; //여기서 초기화 안해주면 arr는 계속 변한상태로 arr가 반환되서 값이 차질이 생김
    return;
}


int main(void){
    cin >> N >> S;
    for(int i=0;i<N;i++){
        cin >> inpArr[i];
    }
    for(int l=1;l<=N;l++){
        for(int i=0;i<N;i++){
            int arrive[21] = {0,}; //도착했는지
            func(i,arrive,l,0,0);
        }
    }
    cout << result;
    
    return 0;
}
