#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b; 
    int yn = 0;
    cin >> a >>b;
    for (int i=2; i<=a; i++){
        if(a%i == 0 && b%i==0){
            yn = 1;
            break;
        }
    }
    cout << yn;
    return 0;
}