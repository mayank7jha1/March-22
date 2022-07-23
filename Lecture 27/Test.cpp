#include<bits/stdc++.h>
using namespace std;
#include<vector>
int n;


void solve(vector<int>&a) {
	for (int i = 0; i < a.size(); i++) {
		a[i] = a[i] + 10;
	}
}

vector<int> solve1(vector<int>a) {
	for (int i = 0; i < a.size(); i++) {
		a[i] = a[i] + 10;
	}
	return a;
}


void count(vector<vector<int>>&a) {

	for (int i = 0; i < a.size(); i++) {
		for (int j = 0; j < a[0].size(); j++) {
			cout << a[i][j] << endl;
		}
	}
}

int main() {
	//int n;
	cin >> n;
	// vector<int>v;
	// for (int i = 0; i < n; i++) {
	// 	int x;
	// 	cin >> x;
	// 	v.push_back(x);
	// }
	// v.pop_back();
	// for (int i = 0; i < v.size(); i++) {
	// 	cout << v[i] << endl;
	// }
	// cout << v.capacity() << endl;

	// cout << *v.begin() << endl;
	// vector<int>::iterator it = v.begin();
	// cout << *it << endl;

	// for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
	// 	cout << *it << endl;
	// }

	// for (int x : v) {
	// 	cout << x << endl;
	// }

	// solve(v);
	// for (auto x : v) {
	// 	cout << x << endl;
	// }
	// vector<int>p = solve1(v);
	// for (auto x : p) {
	// 	cout << x << endl;
	// }

	// vector<int>z = {1, 2, 3, 4, 5};
	// vector<int>z1(n);
	// vector<int>z2(n, -1);

	// // p = z;
	// // if (p == z) {

	// // }
	// for (int i = 0; i < n; i++) {
	// 	cin >> z[i];
	// }
	//cout << z.capacity() << endl;

	// vector<vector<int>>m;

	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		int x;
	// 		cin >> x;
	// 		m.push_back(x);
	// 	}
	// }
	//vector<vector<int>>m1(n, vector<int>(m, -1));

	// //matrix of n X m;

	vector<vector<int>>m(n);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			int x;
			cin >> x;
			m[i].push_back(x);
		}
	}
	cout << m[0][2] << endl;
	for (int i = 0; i < m.size(); i++) {
		for (int j = 0; j < m[0].size(); j++) {
			cout << m[i][j] << endl;
		}
	}
	// vector<vector<int>>m1(n, vector<int>(n, -1));
	// for (int i = 0; i < n; i++) {
	// 	for (int j = 0; j < n; j++) {
	// 		cin >> m1[i][j];
	// 	}
	// }

	// count(m);
	//cout << n << endl;
}