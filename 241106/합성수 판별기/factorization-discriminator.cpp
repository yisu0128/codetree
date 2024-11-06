#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n; 
    cin >> n;
    string cn = "N";
    for (int i =2; i<=n-1; i++){
        if (n%i==0){
            cn = "C";
            break;
        }

    }
    cout << cn;
    return 0;
}