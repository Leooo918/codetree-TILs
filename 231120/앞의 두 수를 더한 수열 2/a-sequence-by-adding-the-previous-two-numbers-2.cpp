#include <iostream>

using namespace std;
int main() {
    int a = 0;
    int b = 1;

    int n;
    int num = 0;
    cin >> n;

    for(int i = 2; i <= n; i++){
        num = a + b;
        a = b;
        b = num;
    }

    if(num == 2){
        num = 1;
    }

    cout << num;

    return 0;
}