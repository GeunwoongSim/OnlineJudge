
#include <stdio.h>
#include <iostream>
using namespace std;

int main(void){
    int L,P,V,TC=1;
    while(1){
        cin >> L >> P >> V;
        if(L==0){
            break;
        }
        int result = V%P<L ? (V%P) + (V/P*L): L + (V/P*L);
        
        cout << "Case " << TC << ": " << result << "\n";
        TC++;
    }
    return 0;
}
