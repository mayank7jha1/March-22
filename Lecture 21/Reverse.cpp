#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void reverse(string &s, int i) {
	if (i == s.length() / 2) {
		return;
	}


	swap(s[i], s[s.length() - i - 1]);

	reverse(s, i + 1);
}

int main() {
	string s;
	cin >> s;
	reverse(s, 0);
	cout << s << endl;
}