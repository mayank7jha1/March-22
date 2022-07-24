#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define str string

bool compare(pair<str, str>a, pair<str, str>b) {
	return a.second < b.second;
}

int main() {
	vector<pair<str, str>>v;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s, t;
		cin >> s >> t;
		v.push_back({s, t});
		//v.push_back(make_pair(s, t));
	}



	sort(v.begin(), v.end(), compare);
	// for (int i = 0; i < v.size(); i++) {
	// 	cout << v[i].first << " " << v[i].second << endl;
	// }
	// cout << endl;
	for (auto x : v) {
		cout << x.first << " " << x.second << endl;
	}

	cout << endl;
	// cout << max(10, max(15, 25)) << endl;
	// cout << max({10, 15, 25}) << endl;



}