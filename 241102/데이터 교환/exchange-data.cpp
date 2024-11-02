#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a =5;
    int b = 6;
    int c = 7;

    int ba;
    int cb;
    int ac;

    ba = b;
    b = a;
    cb = c;
    c = ba;
    ac = c;
    a = cb;

    cout << a<< endl<< b<<endl<<c;

    return 0;
}