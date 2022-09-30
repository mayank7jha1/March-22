#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define mod 1000000007

char grid[1002][1002];

int  Solve(int h, int w) {
	int dp[h + 1][w + 1];

	dp[h][w] = 1;

	for (int i = h; i >= 1; i--) {
		for (int j = w; j >= 1; j--) {
			if (i == h and j == w) {
				continue;
			}
			if (grid[i][j] == '#') {
				dp[i][j] = 0;

			} else {

				if (i == h) {
					dp[i][j] = (dp[i][j + 1]) % mod;
				} else if (j == w) {
					dp[i][j] = (dp[i + 1][j]) % mod;
				} else {
					dp[i][j] = (dp[i + 1][j] + dp[i][j + 1]) % mod;
				}
			}
		}
	}
	return dp[1][1];
}

int main() {
	int h, w;
	cin >> h >> w;
	//memset(dp, -1, sizeof(dp));
	for (int i = 1; i <= h; i++) {
		for (int j = 1; j <= w; j++) {
			cin >> grid[i][j];
		}
	}
	//cout << dp[1][1] << endl;

	cout << Solve(h, w) << endl;
}


