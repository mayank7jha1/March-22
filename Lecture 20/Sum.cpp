#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


int sum(int a[], int i, int n) {
	if (i > n) {
		return 0;
	}
	return a[i] + sum(a, i + 1, n);
}
int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cout << n << endl;
	cout << sum(a, 0, n - 1);
}