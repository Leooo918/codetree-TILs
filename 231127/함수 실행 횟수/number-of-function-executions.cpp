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
	dp.push_back(3);


	for (int i = 3; i <= n; i++) {
		dp.push_back(dp[i - 3] + dp[i - 2] + dp[i - 1]);
	}

	cout << dp[n];
}