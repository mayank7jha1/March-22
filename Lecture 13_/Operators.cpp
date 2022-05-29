// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//Precedence:
	int p = 10;
	int q = ++p;
	cout << q << endl;
	cout << p << endl;
	// int z = 1;
	// cout << ~z;

	int m = 10;
	//Left Shift And Right Shift Operators
	//>>  and <<

	m = m >> 2;
	// m = m >> 1;
	cout << m << endl;
	// x>>y=x/2^y;

	int n = 2;
	n = n << 3;
	// x<<y=x*(2^y);
	// n = n << 1;
	// n = n << 1;
	cout << n << endl;

	int sum = 10;
	sum = sum << 1;
	cout << sum << endl;
	sum = 10;
	sum <<= 1;
	cout << sum << endl;

	// n = n / 10;
	// n = n % 10;

	return 0;
}