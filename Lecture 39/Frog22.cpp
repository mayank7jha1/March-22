#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
vector<int>dp;

int Solve(int index, int* a, int n, int k) {
	if (index >= n) {
		return 1e9;
	}

	if (index == n - 1) {
		return 0;
	}
	if (dp[index] != -1) {
		return dp[index];
	}

	int ans = INT_MAX;

	for (int j = 1; j <= k; j++) {
		ans = min(ans, Solve(index + j, a, n, k) + abs(a[index] - a[index + j]));
	}

	return dp[i] = ans;
}

int main() {
	int n, k;
	cin >> n >> k;
	dp.resize(n, -1);
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Solve(0, a, n, k) << endl;
	return 0;
}