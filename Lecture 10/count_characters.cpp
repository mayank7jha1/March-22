#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	char ch;
	int capital = 0, lower = 0, special = 0, digits = 0;
	while (cin.get(ch)) {
		if (ch >= 65 and ch <= 90) {
			capital++;
		} else if (ch >= 97 and ch <= 122) {
			lower++;
		} else if (ch >= 48 and ch <= 57) {
			digits++;
		} else {
			special++;
		}
	}

	cout << capital << " " << lower << " " << digits << " " << special << " " << endl;
}