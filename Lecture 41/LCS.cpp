#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define MAX 3001

int dp[MAX][MAX];


string getLCS(string &s, string &t, int len) {
	string LCS = "";
	int i = 0, j = 0;

	while (len > 0) {
		if (s[i] == t[j]) {
			LCS.push_back(s[i]);
			// LCS = LCS + s[i];
			i++;
			j++;
			len--;
		} else {
			if (dp[i][j + 1] > dp[i + 1][j]) {
				j++;
			} else {
				i++;
			}
		}
	}
	return LCS;
}


int lenLCS(string &s, string &t, int i, int j) {
	if (i >= s.length() or j >= t.length()) {
		return 0;
	}

	if (dp[i][j] != -1) {
		return dp[i][j];
	}

	if (s[i] == t[j]) {
		return dp[i][j] = 1 + lenLCS(s, t, i + 1, j + 1);
	} else {
		return dp[i][j] = max(lenLCS(s, t, i, j + 1), lenLCS(s, t, i + 1, j));
	}
}

string Solve(string s, string t) {
	memset(dp, -1, sizeof(dp));

	int len = lenLCS(s, t, 0, 0);
	//cout << len << endl;
	//Main yaha tak meri maximum lcs length nikal chuka hu and mera
	//dp ka array bhi fill hogaya hain:

	return getLCS(s, t, len);
}


int main() {
	string s, t;
	cin >> s >> t;
	//cout << s << t << endl;
	cout << Solve(s, t);
}