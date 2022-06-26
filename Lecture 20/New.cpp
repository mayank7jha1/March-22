#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
//Bitmasking:
	// 1 1 2 2 3 4 4 5 5
	//xor  : ^
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int ans = 0;

	for (int i = 0; i < n; i++) {
		ans = ans ^ a[i];
	}
	cout << ans << endl;
}