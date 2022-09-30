#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
#define As 200010
int n, p, k;
// int ans = 0;
int cost[As] = {0};

int Price() {
	int dp[As] = {0};
	sort(cost, cost + n);
	// for (int i = 0; i < n; i++) {
	// 	cout << cost[i] << "";
	// }
	// cout << endl;

	int ans = 0;
	for (int i = 0; i < n; i++) {
		if (i < k - 1) {
			dp[i] = cost[i] + ((i == 0) ? 0 : dp[i - 1]);

		} else if (i == k - 1) {
			dp[i] = cost[i];
		} else {
			dp[i] = dp[i - k] + cost[i];
		}
		if (dp[i] <= p) {
			ans = i + 1;
		}
	}
	/*for (int i = 0; i < n; i++) {
		cout << dp[i] << " ";
	}*/
	return ans;
}




int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cin >> n >> p >> k;
		for (int i = 0; i < n; i++) {
			cin >> cost[i];
		}
		cout << Price() << endl;
	}
}
