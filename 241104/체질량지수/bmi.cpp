#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h, w, b;
    cin >> h>>w;
    b= (10000*w)/(h*h);

    

    cout << b;
    if (b>=25) {
        cout <<endl<< "Obesity";
    }
    return 0;
}