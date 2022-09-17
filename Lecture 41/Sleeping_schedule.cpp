#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
int n, h, l, r;
int a[100005];
int dp[2001][2001];

//dp[i][j]===ki ith sleep me agar tum j the time par uthe tab answer kya hoga:
//dp[x]===main kab utha ye toh theek ?

int Sleeping_Schedule(int sleep, int waking_hour) {
	if (sleep == n) {
		return 0;
	}

	if (dp[sleep][waking_hour] != -1) {
		return dp[sleep][waking_hour];
	}

	int x = (waking_hour + a[sleep]) % h;
	int y = (waking_hour + a[sleep] - 1) % h;

	int ans1 = 0, ans2 = 0;

	if (x >= l and x <= r) {
		ans1 = 1;
	}
	if (y >= l and y <= r) {
		ans2 = 1;
	}
	int option1 = Sleeping_Schedule(sleep + 1, x) + ans1;
	int option2 = Sleeping_Schedule(sleep + 1, y) + ans2;

	return dp[sleep][waking_hour] = max(option1, option2);
}



int32_t main() {
	cin >> n >> h >> l >> r;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << Sleeping_Schedule(0, 0);
}

//Github : Friday 12:00 thoda: stacks,queues rpriority and dp


