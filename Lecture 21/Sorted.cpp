// Created by Mayank

#include <bits/stdc++.h>
using namespace std;


bool Sorted(int *a, int i, int size) {
	// Rukna hain
	if (i == size) {
		return true;
	}
	if (a[i] > a[i + 1]) {
		return false;
	}
	return Sorted(a, i + 1, size);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << Sorted(a, 0, n - 1);
	return 0;
}