#include<bits/stdc++.h>
using namespace std;
// vector<int>dp(10005, -1);
int dp[100005];
// int dp2[100005];



int fib(int n) {
	if (n <= 1) {
		return n;
	}
	if (dp[n] != -1) {
		return dp[n];
	}
	dp[n] = fib(n - 1) + fib(n - 2);
	return dp[n];
}


int fib2(int n) {
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + dp[i - 2];
	}
	return dp[n];
}


int main() {
	memset(dp, -1, sizeof(dp));
	cout << fib(9) << endl;
	memset(dp, -1, sizeof(dp));
	cout << fib2(9) << endl;
}