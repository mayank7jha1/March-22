#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool Solve(int *a, int n) {
	unordered_set<int>s;
	int pre = 0;
	for (int i = 0; i < n; i++) {
		pre += a[i];
		//s.find(pre) != s.end()
		if (pre == 0 or s.count(pre) == 1) {
			return true;
		}
		s.insert(pre);
	}
	return false;
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
		cout << Solve(a, n) << endl;
	}
}