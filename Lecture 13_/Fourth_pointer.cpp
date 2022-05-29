// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int sum(int &xptr) {
	xptr = xptr + 10;
	cout << "Inside Function : " << xptr << endl;
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x, y;
	cin >> x;
	sum(x);
	cout << "Inside Main " << x << endl;

	return 0;
}