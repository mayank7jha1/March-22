//Created by Mayank
#include <bits/stdc++.h>
using namespace std;

#define int long long

int PairPain(int *a, int n) {
	int count = 0, value = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] == 2) {
			count++;
		}
		else if (a[i] > 2) {
			value++;
		}
	}
	int ans = (long long)(count * value) + (value * (value - 1)) / 2;
	return ans;
}

int32_t main()
{
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		cout << (long long)(n * (n - 1) / 2) - PairPain(a, n) << endl;
	}

	return 0;
}
