#include<bits/stdc++.h>
using namespace std;
// const int N = 1;

int main() {
	// int n;
	// cin >> n;
	// int x;
	// cin >> x;
	int n, x;
	cin >> n >> x;

	for (int i = 1; i < n; i = i + 1) {

		if (i == x) {
			continue;
		}
		cout << "Mayank " << i << endl;
	}
}