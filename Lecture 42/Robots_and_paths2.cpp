#include <bits/stdc++.h>
using namespace std;
int grid[1001][1001];
int dp[1001][1001];

int main () {
	int n, m, p;
	cin >> n >> m >> p;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			grid[i][j] = 0;
		}
	}
	while (p--) {
		int x, y;
		cin >> x >> y;
		grid[x - 1][y - 1] = 1;
	}
	memset(dp, -1, sizeof(dp));
	dp[0][0] = 1;
	for (int i = 0; i < n; i ++) {
		for (int j = 0; j < m; j++) {
			if (i == 0 and j == 0) {
				continue;
			}
			if (grid[i][j] == 1) {
				dp[i][j] = 0;
			} else {
				if (i == 0) {
					dp[i][j] = dp[i][j - 1];
				} else if (j == 0) {
					dp[i][j] = dp[i - 1][j];
				} else {
					dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
				}
			}
		}
	}
	cout << dp[n - 1][m - 1] << endl;
}
