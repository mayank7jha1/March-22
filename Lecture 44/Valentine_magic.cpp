// Created by Mayank
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define inf 10000000000000000ll

ll n, m;
ll a[5004], b[5004], dp[5004][5004];
ll f(int i, int j) {
	// Base Condition:
	if (i == n) {
		return 0;
	}
	if (j == m) {
		return 1e12;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}
	ll option1 = f(i, j + 1);//boy i is not pairing with girl j
	ll option2 = f(i + 1, j + 1) + abs(a[i] - b[j]);

	return dp[i][j] = min(option1, option2);
}


int main() {
	ios::sync_with_stdio(0);
	memset(dp, -1, sizeof(dp));
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}

	sort(a, a + n);
	sort(b, b + m);
	ll ans = f(0, 0);
	cout << ans << endl;
	return 0;
}