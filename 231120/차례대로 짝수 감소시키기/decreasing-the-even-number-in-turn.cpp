#include <iostream>

using namespace std;
int main() {
    int n;
    cin >> n;

    int a = 1000;
    int num = 0;
    int sum = 0;

    while(a > n){
        num++;
        a -= 2 * num;
        sum += 2 * num;
    }

    cout << num << " " << sum;
    return 0;
}