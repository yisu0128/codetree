#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; 
    int yn = 0;
    cin >> a >>b;
    for (int i=a; i<=b; i++){
        if(1920%i == 0 && 2880%i==0){
            yn = 1;
            break;
        }
    }
    cout << yn;
    return 0;
}