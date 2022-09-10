// https://atcoder.jp/contests/dp/tasks/dp_a
#include<bits/stdc++.h>
using namespace std;
int n;



int Solve(vector<int>&a, int i, vector<int>&dp) {
	if (i == n - 1) {
		return 0;
	}

	if (dp[i] != -1) {
		return dp[i];
	}

	int option1 = abs(a[i] - a[i + 1]) + Solve(a, i + 1, dp);
	int option2 = INT_MAX;
	if (i + 2 <= n - 1) {
		option2 = abs(a[i] - a[i + 2]) + Solve(a, i + 2, dp);
	}

	return dp[i] = min(option1, option2);

}


int main() {
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	vector<int>dp(n + 1, -1);

	cout << Solve(a, 0, dp) << endl;
}