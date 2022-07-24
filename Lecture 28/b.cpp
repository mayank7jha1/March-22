#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {

	int n;
	cin >> n;
	map<string, int>m;

	for (int i = 0; i < n; i++) {
		string x; int y;
		cin >> x >> y;
		m.insert(make_pair(x, y));
	}


	cout << m["Mayank"] << endl;
	cout << m["Rahul"] << endl;

	map<string, int>::iterator it = m.begin();

	for (; it != m.end(); it++) {
		cout << (*it).first << " " << (*it).second << endl;
	}

}