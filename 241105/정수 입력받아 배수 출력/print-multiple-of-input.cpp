#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int n, i;
    cin>> n;
    for (i=n; i<=5*n; i+=n){
       cout << i << " ";
    }
    return 0;
}