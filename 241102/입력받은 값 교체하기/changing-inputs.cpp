#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    int b;
    int tempa;
    cin >> a >> b;
    
    tempa = a; 
    a=b;
    b=tempa; 

    cout << a << " " <<b;
    return 0;
}