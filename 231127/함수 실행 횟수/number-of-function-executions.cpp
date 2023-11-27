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
	dp.push_back(2);


	for (int i = 2; i <= n; i++) {
		dp.push_back(dp[i - 2] + dp[i - 1]);
	}

	cout << dp[n];
}