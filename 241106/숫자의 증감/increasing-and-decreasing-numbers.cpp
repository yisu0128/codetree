#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    char c;

    cin >> c>>n;

    if (c == 'A'){
        for (int i = 1; i<=n; i++){
            cout << i << " ";
        }
    }

    else if (c == 'D') {
        for (int j = n; j >= 1; j-=1){
            cout << j << " ";
        }
    }
    return 0;
}