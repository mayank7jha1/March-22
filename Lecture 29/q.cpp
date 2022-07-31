#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;

	map<pair<int, int>, int>m;

	//Index, key,value

	for (int i = 0; i < n; i++) {
		int  y, z;
		cin >> y >> z;
		m.insert({{y, i}, z});
	}


// map  Key:  pair and key should be unique;

// 	all pairs are unique or not ?

// 	sort input ke key ke according toh pair input ka key, index and uske corresponding
// 	value ddal do.

	for (auto x : m) {
		cout << x.first.first << " " << x.first.second << " " << x.second << endl;
	}
}




