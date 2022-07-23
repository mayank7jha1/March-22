#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	// pair<int, int>p{1, 3};
	// pair<int, int>p1;
	// p1 = make_pair(1, 3);


	// cout << p1.first << endl;
	// cout << p1.second << endl;
	//pair<vector<int>, vector<int>>p;
	int n;
	cin >> n;
	vector<pair<int, int>>v;
	for (int i = 0; i < n; i++) {
		int x, y;
		cin >> x >> y;

		v.push_back(make_pair(x, y));
	}
	for (int i = 0; i < n; i++) {
		cout << v[i].first << endl;
		cout << v[i].second << endl;
	}
}