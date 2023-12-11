#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
int main() {
    string input;
    cin >> input;

    int total = 0;
    vector<int> alphabet(52);

    for(int i = 0; i < 26; i++){
        bool isAlphabetFind = false;
        vector<int> include(26);
        for(int j = 0; j < input.size(); j++){
            if(input[j] == 'A' + i){
                if(isAlphabetFind)break;
            }

            if(isAlphabetFind){
                include[input[j] - 'A']++;
                cout << input[j] << " ";
            }

            if(input[j] == 'A' + i){
                else isAlphabetFind = true;
            }
        }
        
        for(int j = 0; j < include.size(); j++){
            if(include[j] == 1){
                total++;
                cout << j << " ";
            }
        }
    }

    cout << total / 2;

    return 0;
}