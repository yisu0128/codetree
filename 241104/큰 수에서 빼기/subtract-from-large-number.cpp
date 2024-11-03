#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;
    cin >>a>>b;
    if (a<b){
        cout << b-a;
    }
    if (a>=b) {
        cout << a-b;
    }
    return 0;
}