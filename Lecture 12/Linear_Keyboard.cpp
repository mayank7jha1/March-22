#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int t;
	cin >> t;

	while (t--) {
		char keyboard[27], word[51];
		cin >> keyboard >> word;

		int mapping[256] = {0};
		for (int i = 0; i < 26; i++) {
			mapping[keyboard[i]] = i + 1;
		}
		int ans = 0;
		int n = 0;
		for (int i = 0; word[i] != '\0'; i++) {
			n++;
		}

		for (int i = 0; i < n - 1; i++) {
			ans = ans + abs(mapping[word[i + 1]] -
			                mapping[word[i]]);
		}
		cout << ans << endl;
	}

}