#include <iostream>

using namespace std;
int main() {
    long a = 0;
    long b = 1;

    int n;
    long num = 0;
    cin >> n;

    for(int i = 2; i <= n; i++){
        num = a + b;
        a = b;
        b = num;
    }

    if(n == 1){
        num = 1;
    }

    cout << num;

    return 0;
}