// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	// char a[] = {'A', 'B', 'C', 'D', 'E', '\0'};
	// cout << a << endl;
	// cout << &a << endl;
	// cout << (void*)a << endl;
	// int x;
	// cin >> x;
	// cout << x;

	// char ch;
	// while (ch != '$') {
	// 	// cin >> ch;
	// 	cin.get(ch);
	// 	cout << ch;
	// }
	// cout << endl;

	char ch[100];
	// cin.get(ch, 50);
	// cin.ignore();
	cin.getline(ch, 100, '$');
	int x;
	cin >> x;
	cout << ch << endl;
	cout << x << endl;
	cin.ignore();
	string s;
	getline(cin, s);
	int y;
	cin >> y;
	cout << s << endl;
	cout << y;





	return 0;
}