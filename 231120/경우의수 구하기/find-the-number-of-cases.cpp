#include <iostream>

using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    int num = 0;

    //for(int i = 0; i < a; i++){
        if(i + a < b){
            num += b;
        }
        else if(i + a == b){
            num += 1;
        }
    //}

    cout << num;

    return 0;
}