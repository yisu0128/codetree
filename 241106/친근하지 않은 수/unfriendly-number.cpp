#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    cin >> n; 
    int cnt = 0; 
    for (int i = 1; i<=n; i++){
        if (i%2==0){
            cnt+=1;
            continue;
        }
        if (i%3 == 0){
            cnt+=1;
            continue;
        }
        if (i%5 == 0){
            cnt+=1;
            continue;
        }
        

    }
    cout << 10-cnt;
    return 0;
}