#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	// int a[] = {1, 2, 3, 4, 5, 6};
	// cout << a << endl;
	// cout << &a << endl;

	/*	char ch = 'A';
		cout << ch << endl;
		while (cin >> ch) {
			cout << ch;;
		}*/
	/*
		char p;
		cin >> p;
		while (p != '@') {
			cout << p;
			cin >> p;
		}*/

	char m[] = {'M', 'A', 'Y', 'A', 'N', 'K', '\0'};

	//char m[] = {"Mayank Jha"};
	//char m[] = {"Mayank"};
	cout << m << endl;
	int n = sizeof(m) / sizeof(char);
	cout << n << endl;
	for (int i = 0; i < 6; i++) {
		cout << m[i];
	}





	/*float x = 10.5;
	int y = (int)x;
	cout << y << endl;
	cout << x << endl;*/
}