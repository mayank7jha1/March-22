// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

string s;

void replace( char x, char y, int i) {
	if (i > s.length()) {
		//cout << s << endl;
		return;
	}

	if (s[i] == x) {
		s[i] = y;
	}

	replace( x, y, i + 1);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//string s;
	cin >> s;
	char x, y;
	cin >> x >> y;
	// x->y

	replace( x, y, 0);
	//cout << s;

	cout << s;
	return 0;
}



