#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h, w, b;
    b= (10000*w)/(h^2);

    cin >> h>>w;

    cout << b;
    if (b>=25) {
        cout <<endl<< "obesity";
    }
    return 0;
}