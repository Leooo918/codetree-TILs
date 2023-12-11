#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string input;
    cin >> input;

    int total = 0;
    vector<int> v(52);

    for(int i = 0; i < 26; i++){
        int position = -1;
        for(int j = 0; j < input.size(); j++){
            if(position >= 0) position++;
            if(input[j] == 'A' + i){
                if(position < 0)position = 0;
                else break;
            }
        }
        v[position]++;
    }

    int n = max_element(v.begin(), v.end()) - v.begin();
    int m = 0;

    for(int i = 0; i < v.size();i++){
        if(i != n){
            m += v[i];
        }
    }

    cout << m / 2;

    return 0;
}