#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {

	vector<int>v{5, 4, 3, 2, 1};

	map<int, int>m;

	for (int i = 0; i < v.size(); i++) {
		m.insert({v[i], i});
	}
	for (auto x : m) {
		cout << x.first << " ";
	}
	cout << endl;
	cout << endl;
	vector<int>v1{5, 5, 5, 5, 5, 5, 1, 1, 1, 1, 2, 3, 3, 4, 4, 5};

	map<int, int, greater<int>>m1;

	for (int i = 0; i < v1.size(); i++) {
		m1.insert({i, v1[i]});
	}

	for (auto x : m1) {
		cout << x.first << " " << x.second << endl;;
	}



}