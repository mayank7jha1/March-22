#include<bits/stdc++.h>
using namespace std;
const int N = 0;




int main() {
	map<int, int>m;
	set<int>s;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		s.insert(x);
	}

	for (auto x : s) {
		cout << x << endl;
	}
}