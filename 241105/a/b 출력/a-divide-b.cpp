#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,i;
    cin>> a>> b;
    cout << a/b<<".";
    a= a%b;
    for (i=0; i<20; i++){
        a*=10;
        cout << a/b;
        a = a%b;
    }
    
    return 0;
}