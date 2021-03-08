
#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int inputArr[100]; //제품 순서
int plug[100]; //제품을 꼽는 플러그
queue<int> Q[101]; //[제품명] 들어간 순서대로의 값 = 사용순서

int plugNum; //플러그에 꼽혀있는 제품 수
int N,K; //N=플러그 수, K=제품 수
int result; //뺀 횟수

bool plugCheck(int);
bool plugEmptyPosi();
void emptyPlugInNum(int);
void plugUseTimeCheck(int);


int main(void){
    int inp;
    cin >> N >> K; //N, K입력
    for(int i=0;i<K;i++){ //제품 순서 대로 입력
        cin >> inp;
        inputArr[i] = inp;
        Q[inp].push(i);
    }

    for(int i=0;i<K;i++){
        inp = inputArr[i]; //제품명
        //해당 제품이 꼽혀있는가?
        if(plugCheck(inp)){ //제품이 꼽혀있음
            continue;
        }else{ //제품이 꼽혀있지 않음
            //콘센트에 빈자리가 있는가?
            if(plugEmptyPosi()){ //빈자리 있음
                emptyPlugInNum(inp); //반자리에 inp를 꼽음
            }
            else{ //빈자리 없음
                plugUseTimeCheck(inp);
            }
        }
    }
    cout << result;
    return 0;
}

//제품 num이 꼽혀있는지 확인
bool plugCheck(int num){
    for(int index=0;index<plugNum;index++){
        if(plug[index] == num){
            Q[num].pop();
            return true;
        }
    }
    return false;
}

//빈자리가 있는지 확인
bool plugEmptyPosi(){
    if(plugNum==N){ //빈자리 없음
        return false;
    }
    return true; //빈자리 있음
}

//비어있는 플러그에 num제품을 꼽음
void emptyPlugInNum(int num){
    plug[plugNum] = num;
    plugNum = plugNum+1;
    Q[num].pop();
}

//꼽혀있는 플러그를 다음번 몇번째에 쓰는지 확인 - 가장 늦게 쓰는 친구 제거 후 새거 꼽음
void plugUseTimeCheck(int inp){ //안쓰는 제품을 빼고 inp를 사용
    int maximum = -1;
    int position = -1; //꼽혀있는 위치
    for(int index=0;index<plugNum;index++){
        int num = plug[index]; //꼽혀있는 제품명
        if(Q[num].empty()){ //더이상 해당 제품을 안씀
            plug[index] = inp; //num대신 inp를 꼽음
            result = result+1;
            Q[inp].pop(); //제품inp중 가장 먼저 사용하는 값 제거
            return;
        }else{ //이후에 한번 이상 씀
            int front = Q[num].front(); //제품num을 가장 먼저 언제쓰는지
            if(maximum < front){ //현재까지 가장 늦게 쓰는거 보다 제품num을 더 늦게 씀
                maximum = front;
                position = index; //num제품이 꼽혀있는 위치
            }
        }
    }
    plug[position] = inp;
    result = result+1;
    Q[inp].pop();
    return;
}
