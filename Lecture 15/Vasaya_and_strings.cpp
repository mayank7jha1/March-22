#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int n, k;


int solve(string s, char x) {
	int ans = INT_MIN;
	int j = 0;
	int c = 0;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] != x) {
			c++;
		}
		while (c > k and j <= i) {
			if (s[j] != x) {
				c--;
			}
			j++;
		}
		if (i - j + 1 > ans) {
			ans = i - j + 1;
		}
	}
	return ans;
}
int main() {
	cin >> n >> k;
	string s;
	cin >> s;
	//First Try:
	int ans = solve(s, 'a');

	//Second Try
	int ans1 = solve(s, 'b');

	cout << max(ans, ans1);
	//cout << "Mauan";
}