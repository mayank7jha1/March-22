#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	string s[n];
	for (int i = 0; i < n; i++) {
		cin >> s[i];
	}
	/*for (int i = 0; i < n; i++) {
		cout << s[i] << " ";
	}
	cout << s[2][2] << endl;*/

	sort(s, s + n);
	for (int i = 0; i < n; i++) {
		cout << s[i] << endl;
	}
	cout << endl;

	sort(s[0].begin(), s[0].end());

	cout << s[0] << endl;



}