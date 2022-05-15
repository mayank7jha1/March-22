#include<bits/stdc++.h>
using namespace std;
// const int N = ;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}

		int i = 0, j = n - 1;
		int b[n];
		int k = 0;
		while (i < j) {
			b[k] = a[i];
			k = k + 1;
			b[k] = a[j];
			k = k + 1;
			i = i + 1;
			j = j - 1;
		}
		if (i == j) {
			b[k] = a[i];
		}
		for (int i = 0; i < n; i++) {
			cout << b[i] << " ";
		}
		cout << endl;
	}
}