
#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	map<string, int>m;

	for (int i = 0; i < n; i++) {
		string x;
		cin >> x;
		m[x] = m[x] + 1;
	}
	for (auto it = m.begin(); it != m.end(); it++) {
		cout << (*it).first << "--->" << (*it).second << endl;
	}
}