#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    cout << fixed;
    cout.precision(1);
    int a;
    int b;
    cin >> a>>b;
    cout << a+b << " "<< (double)
    (a+b)/2;
    return 0;
}