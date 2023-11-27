#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> dp;
	int n;
	int num;

	cin >> n;

	dp.push_back(1);
	dp.push_back(1);	

	for (int i = 2; i <= n; i++) {
		dp.push_back(dp[i - 1] +dp[i - 2] + 1);
	}

	cout << dp[n];
}