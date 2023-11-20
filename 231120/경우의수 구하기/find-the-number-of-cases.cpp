#include <iostream>
#include <vector>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int num = 0;

    for(int i = b - a; i > 0; i--){
        num += b - i;
    }

    if(num == 0) num ++;

    cout << num;

    return 0;
}