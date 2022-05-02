#include<bits/stdc++.h>
using namespace std;


int main() {
	int x;
	int count = 0;
	int sum = 0;

	while (cin >> x) {
		//cin >> x;
		sum = sum + x;
		count = count + 1;

	}
	cout << sum / count << endl;
}