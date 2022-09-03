#include<bits/stdc++.h>
using namespace std;
// const int N = '0';
// #define int long long
#define endl '\n'


class Activity {
public:
	int starting_point;
	int ending_point;

};

Activity a[100005];
int n;

/*bool compare(Activity a, Activity b) {
	if (a.ending_point == b.ending_point) {
		return a.starting_point < b.starting_point;
	}
	return a.ending_point < b.ending_point;
}*/

int solve() {
	sort(a, a + n, [&](Activity a, Activity b) {
		if (a.ending_point == b.ending_point) {
			return a.starting_point < b.starting_point;
		}
		return a.ending_point < b.ending_point;
	});

	int ans = 1;
	int prev_ending_point = a[0].ending_point;

	for (int i = 0; i < n; i++) {
		if (a[i].starting_point >= prev_ending_point) {
			ans++;
			prev_ending_point = a[i].ending_point;
		}
	}

	cout << ans << endl;
}

int32_t main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> a[i].starting_point >> a[i].ending_point;
		}
		solve();
	}
}