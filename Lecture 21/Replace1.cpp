// Created by Mayank

#include <bits/stdc++.h>
using namespace std;



void replace( char x, char y, int i, string &s) {
	if (i > s.length()) {
		//cout << s << endl;
		return;
	}

	if (s[i] == x) {
		s[i] = y;
	}

	return replace( x, y, i + 1, s);
	//cout << s << endl;
}

int main() {
	string s;
	cin >> s;
	char x, y;
	cin >> x >> y;
	// x->y

	replace( x, y, 0, s);
	//cout << s;

	cout << s;
	return 0;
}



