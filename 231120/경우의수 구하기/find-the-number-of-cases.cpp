#include <iostream>
#include <vector>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int num = 0;

    for(int i = a - 1; i > 0; i--){
        num += b - i;
    }

    cout << num;

    return 0;
}