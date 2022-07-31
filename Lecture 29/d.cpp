#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {

	// Roll No:   Name and   Marks


	//map<pair<int, string>, int> m;

	unordered_map<pair<int, string>, int> m;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x; string s; int z;
		cin >> x >> s >> z;
		m.insert({{x, s}, z});

		//m.insert(make_pair(make_pair(x, s), z));
	}

	for (auto x : m) {
		//x ka first ek pair hain tum directly print nahi karva sakte

		pair<int, string>p = x.first;
		int o = x.second;

		cout << p.first << " " << p.second << " ";
		cout << o << endl;
	}





}