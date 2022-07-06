#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

string solve(string s) {
	if (s.length() == 0 or s.length() == 1) {
		return s;
	}
	if (s[0] == 'p' and s[1] == 'i') {
		return "3.14" + solve(s.substr(2));
	} else {
		return s[0] + solve(s.substr(1));
	}
}


int main() {
	string s;
	cin >> s;
	cout << solve(s);
}