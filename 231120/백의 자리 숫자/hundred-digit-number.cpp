#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nums(10);

    for(int i = 0 ; i < n; i++){
        int a;
        cin >> a;
        
        nums[a / 100]++;
    }

    for(int i = 0; i < 10; i++){
        if(nums[i] == 0) continue;
        cout << i << " - " << nums[i] << "\n";
    }

    return 0;
}