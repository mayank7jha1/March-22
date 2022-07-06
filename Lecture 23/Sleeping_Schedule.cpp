#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
int n, h, l, r;
int a[100005];

int Sleeping_Schedule(int sleep, int waking_hour) {
	if (sleep == n) {
		return 0;
	}


	int x = (waking_hour + a[sleep]) % h;
	int y = (waking_hour + a[sleep] - 1) % h;

	int ans1 = 0, ans2 = 0;
	if (x >= l and y <= r) {
		ans1 = 1;
	}
	if (y >= l and y <= r) {
		ans2 = 1;
	}
	3
	int option1 = Sleeping_Schedule(sleep + 1, x) + ans1;
	int option2 = Sleeping_Schedule(sleep + 1, y) + ans2;

	return max(option1, option2);
}



int32_t main() {
	cin >> n >> h >> l >> r;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << Sleeping_Schedule(0, 0);
}