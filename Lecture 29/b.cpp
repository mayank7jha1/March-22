#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int main() {
	int n;
	cin >> n;

	vector<pair<int, string>>v;

	for (int i = 0; i < n; i++) {
		int x; string s;
		cin >> x >> s;
		v.push_back({x, s});
	}

	for (auto x : v) {
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	map<int, string>m;

	for (int i = 0; i < v.size(); i++) {
		m.insert({v[i].first, v[i].second});
	}


	//NLOgN

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}


}