#include <iostream>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int num = 0;

    num = (b - a) * b;

    if(num == 0) num = 1;

    cout << num;
    return 0;
}