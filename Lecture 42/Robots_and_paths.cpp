#include<bits/stdc++.h>
using namespace std;
int n, m, p;
int grid[1002][1002];
#define mod 1000000007


int Solve() {
	int dp[1002][1002];

	if (grid[1][1] == -1) {
		return 0;
	}

	dp[1][1] = 1;

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {
			if (i == 1 and j == 1) {
				continue;
			}
			if (grid[i][j] == -1) {
				dp[i][j] = 0;
			} else {
				if (i == 1) {
					dp[i][j] = (dp[i][j - 1]) % mod;
				} else if (j == 1) {
					dp[i][j] = (dp[i - 1][j]) % mod;
				} else {
					dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
				}
			}
		}
	}
	return dp[n][m];
}

int main() {

	cin >> n >> m >> p;

	for (int i = 0; i < p; i++) {
		int x, y;
		cin >> x > y;
		grid[x][y] = -1;
	}
	cout << Solve();

}