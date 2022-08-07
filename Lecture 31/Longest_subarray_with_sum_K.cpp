#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool Solve(int *a, int n) {
	unordered_set<int>s;
	int pre = 0;
	for (int i = 0; i < n; i++) {
		pre += a[i];
		//s.find(pre) != s.end()
		if (pre == k or s.count(pre - k ) == 1) {
			return true;
		}
		s.insert(pre);
	}
	return false;
}

int Solve2(int *a, int n) {
	unordered_map<int, int>m;
	int pre = 0;
	int len = 0;
	for (int i = 0; i < n; i++) {
		pre += a[i];
		if (pre == k) {
			len = max(len, i + 1);
		}
		if (m.find(pre - k) != m.end()) {
			len = max(len, i - m[pre - k]);
		} else {
			m[pre] = i;
		}
	}
	return len;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		if (Solve(a, n) == 0) {
			cout << -1 << endl;
		} else {
			cout << Solve2(a, n) << endl;
		}
	}
}