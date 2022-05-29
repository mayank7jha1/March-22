#include<bits/stdc++.h>
#include<string>

using namespace std;
// const int N = 0;

int main() {
	char ch[100] = {'A', 'B', 'C', '\0'};

	int len = 0;
	for (int i = 0; ch[i] != '\0'; i++) {
		len++;
	}
	cout << len << endl;

	// char a[100];
	// cin.getline(a, 100);
	// cout << a << endl;
	/*
		string s, t;
		cin >> s >> t;
		cout << s << endl;
		cout << "This is different" << endl;*/
	string s, t;
	getline(cin, s);

	getline(cin, t);

	cout << t << endl << s << endl;;


}