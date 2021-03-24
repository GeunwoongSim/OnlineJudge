
#include <stdio.h>
#include <iostream>
using namespace std;

int map[21][21];

int func(int x0, int y0, int xi, int yi, bool slice){ //slice가 참이면 가로로 잘랐음, slice가 거짓이면 세로로 잘랐음
    int impurities=0, jewel=0; //불순물, 보석
    for(int y=y0;y<yi;y++){
        for(int x=x0;x<xi;x++){
            if(map[y][x] == 2){ //보석있음
                jewel++;
            }
            else if(map[y][x] == 1){ //불순물있음
                impurities++;
            }
        }
    }
    
    if(jewel == 1 && impurities == 0){ //불순물없고 보석있음 - 진행가능
        return 1;
    }
    else if(jewel == 1 && impurities == 1){ //불순물과 보석이 1개씩이므로 - 진행불가
        return 0;
    }
    else if(jewel == 0){ //불순물만 있거나 둘다 없음 - 진행불가
        return 0;
    }
    else if(jewel > 2 && impurities == 0){
        return 0;
    }
    //불순물과 쥬얼이 여러개 - 석판 나눠봐야 앎
    int result = 0;
    for(int y=y0;y<yi;y++){
        for(int x=x0;x<xi;x++){
            if(map[y][x] == 1){//불순물
                if(slice){ //이전에 가로로 잘랐기 때문에 그다음은 세로만 가능
                    //세로로 자를 수 있는가?
                    if(x!=x0 && x!=xi-1){ //양끝이 아니라서 1차합격
                        bool check = true;
                        for(int i=y0;i<yi;i++){
                            if(map[i][x] == 2){ //세로에 보석이 있어서 불가능
                                check = false;
                                break;
                            }
                        }
                        if(check){ //세로에 보석이 없어서 2차합격
                            result = result + func(x0, y0, x, yi, false)*func(x+1, y0, xi, yi, false);
                        }
                    }
                }
                else{ //이전에 세로로 잘랐기 때문에 그다음은 가로만 가능
                    //가로로 자를 수 있는가?
                    if(y!=y0 && y!=y-1){ //양끝이 아니라서 1차합격
                        bool check = true;
                        for(int i=x0;i<xi;i++){
                            if(map[y][i] == 2){ //가로에 보석이 있어서 불가능
                                check = false;
                                break;
                            }
                        }
                        if(check){//가로에 보석이 없어서 2차합격
                            result = result + func(x0, y0, xi, y, true)*func(x0, y+1, xi, yi, true);
                        }
                    }
                }
            }
        }
    }
    return result;
}

int main(void){
    int N,imp=0,jew=0;
    cin >> N;
    for(int y=0;y<N;y++){
        for(int x=0;x<N;x++){
            cin >> map[y][x];
            if(map[y][x] == 2){
                jew++;
            }
            else if(map[y][x] == 1){
                imp++;
            }
        }
    }
    if(imp==0 && jew == 1){
        cout << 1;
    }
    else{
        int resultA = func(0,0,N,N,true);
        int resultB = func(0,0,N,N,false);
        if(resultA + resultB == 0){
            cout << -1;
        }
        else{
            cout << resultA + resultB;
        }
    }
    return 0;
}

