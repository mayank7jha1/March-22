#include<bits/stdc++.h>
using namespace std;
// const int N = ;

int main() {
	char p;
	cin >> p;
	while (p != '$') {
		if (p >= 97 and p <= 122) {
			p = p - 32;
		}
		cout << p << " ";
		cin >> p;
	}
	//cout << "mayak";
}