#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    
     int n;
    int answer = 0;
    vector<int> input;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        input.push_back(a);
    }
    int maxNum = 0;

    for (int i = 0; i < n; i++) {
        int curRange = 1;
        int curNum = i;
        int curSelected = 0;

        for (int j = 0; j < n; j++) {
            bool breakCheck = true;
            for (int k = 1; k <= curRange; k++) {
                if (find(input.begin(), input.end(), input[curNum] + k) != input.end()) {
                    curNum = find(input.begin(), input.end(), input[curNum] + k) - input.begin();
                    ++curSelected;
                    curRange++;
                    breakCheck = false;
                    break;
                }
            }
            if (breakCheck) break;
        }

        curNum = i;
        for (int j = 0; j < n; j++) {
            bool breakCheck = true;
            for (int k = 1; k <= curRange; k++) {
                if (find(input.begin(), input.end(), input[curNum] - k) != input.end()) {
                    curNum = find(input.begin(), input.end(), input[curNum] - k) - input.begin();
                    ++curSelected;
                    ++curRange;
                    breakCheck = false;
                    break;
                }
            }
            if (breakCheck) break;
        }



        if (maxNum <= curSelected) {
            maxNum = curSelected;
        }
    }

    cout << maxNum;


    return 0;
}