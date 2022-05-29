// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int x = 10;
	int* xptr = &x;
	// cout << xptr << endl;
	// cout << *xptr << endl;


	cout << *xptr + 1 << endl;
	cout << *(xptr + 1) << endl;

	int y = 20;
	int*yptr = &y;

	cout << (&y) << endl;
	cout << yptr << endl;


	cout << *(&y) << endl;
	cout << *yptr << endl;

	cout << *(&yptr) << endl;
	cout << &(*yptr) << endl;


	int** zptr = &yptr;
	cout << zptr << endl;
	cout << *zptr << endl;
	cout << &zptr << endl;



	return 0;
}