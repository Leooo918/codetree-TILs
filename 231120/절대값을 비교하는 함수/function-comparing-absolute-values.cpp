#include <iostream>
#include<vector>

using namespace std;
int main() {
    int t;
    cin >> t;

    vector<int> answer;

    for(int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        if(abs(a) > abs(b)){
            answer.push_back(abs(a));
        }
        else{
            answer.push_back(abs(b));
        }
    }

    for(int i = 0 ; i < t; i++){
        cout << answer[i] << "\n";
    }

    return 0;
}