#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string input;
    cin >> input;

    int total = 0;

    for(int i = 0; i < input.size(); i++){
        if(input[i] != input[++i]){
            total++;
        }
    }

    cout << total / 2;

    return 0;
}