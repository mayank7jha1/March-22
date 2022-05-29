// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	char ch = 'A';
	// ch = ch + 32;
	// cout << ch << endl;
	if (islower(ch)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
	ch = tolower(ch);
	cout << ch << endl;

	string s = "Mayank";
	int n = 10;
	s = s + to_string(n);//Run Time
	n = n + 10;
	cout << n << endl;
	cout << s << endl;
	int number = 9;
	char z = number + '0';
	cout << z << endl;
	char ch2 = '9';
	int num = ch2 - '0';
	cout << num << endl;
	return 0;
}