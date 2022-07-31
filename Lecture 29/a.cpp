#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {

	map<string, int>m;

	unordered_map<string, int>um;

	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string s; int x;
		cin >> s >> x;

		m.insert({s, x});
		um.insert({s, x});
	}


	for (map<string, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}

	cout << endl;
	for (unordered_map<string, int>::iterator it = um.begin(); it != um.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}
	cout << endl;
	//For every element that is inside m i want type of that element:

	for (pair<string, int> x : m) {
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;
	for (pair<string, int> x : um) {
		cout << x.first << " " << x.second << endl;
	}
	cout << endl;




}