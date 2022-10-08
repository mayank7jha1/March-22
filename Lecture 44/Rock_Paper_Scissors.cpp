#include<bits/stdc++.h>
using namespace std;
#define int long long
int  r, s, p;
double dp[105][105][105];

//Case Where we are concerned about rocks:
double solveRocks(int r, int s, int p) {
	if (s == 0 or r == 0) {
		return 0.0;
	}
	if (p == 0) {
		return 1.0;
	}
	if (dp[r][s][p] >      -1.0) {
		return dp[r][s][p];
	}
	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	ans += ((r * p) / total) * solveRocks(r - 1, s, p);
	ans += ((r * s) / total) * solveRocks(r, s - 1, p);
	ans += ((p * s) / total) * solveRocks(r, s, p - 1);

	return dp[r][s][p] = ans;
}

double solveScissors(int r, int s, int p) {


	if (p == 0 or s == 0) {
		return 0.0;
	}
	if (r == 0) {
		return 1.0;
	}
	if (dp[r][s][p] > -1.0) {
		return dp[r][s][p];
	}
	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	ans += ((r * p) / total) * solveScissors(r - 1, s, p);
	ans += ((r * s) / total) * solveScissors(r, s - 1, p);
	ans += ((p * s) / total) * solveScissors(r, s, p - 1);

	return dp[r][s][p] = ans;
}

double solvePapers(int r, int s, int p) {

	if (r == 0 or p == 0) {
		return 0.0;
	}
	if (s == 0) {
		return 1.0;
	}
	if (dp[r][s][p] > -1.0) {
		return dp[r][s][p];
	}
	double ans = 0;
	double total = (r * p) + (p * s) + (s * r);

	ans += ((r * p) / total) * solvePapers(r - 1, s, p);
	ans += ((r * s) / total) * solvePapers(r, s - 1, p);
	ans += ((p * s) / total) * solvePapers(r, s, p - 1);

	return dp[r][s][p] = ans;
}



int32_t main() {
	//cin >> r >> s >> p;
	int t;
	cin >> t;
	while (t--) {
		cin >> r >> s >> p;
		memset(dp, -1, sizeof(dp));
		cout << fixed << setprecision(9) << solveRocks(r, s, p) << " ";
		memset(dp, -1, sizeof(dp));
		cout << fixed << setprecision(9) << solveScissors(r, s, p) << " ";
		memset(dp, -1, sizeof(dp));
		cout << fixed << setprecision(9) << solvePapers(r, s, p) << " ";
		cout << endl;
	}
}

// rC1=
