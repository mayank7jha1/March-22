#include<bits/stdc++.h>
using namespace std;
const int N = 0;//

int Maximum(int x, int y) {
	if (x < y) {
		return y;
	} else {
		return x;
	}
}

int main() {
	int x, y;
	cin >> x >> y;
	cout << Maximum(x, y) << endl;

	cout << max(x, y) << endl;
	cout << min(x, y) << endl;

	int a[] = {1, 3, 4, 5, 9};
	int n = sizeof(a) / sizeof(int);
	cout << n << endl;

	long long m = pow(x, y);//x^y
	cout << m << endl;
	cout << sqrt(m) << endl;
	swap(x, y);
	cout << x << " " << y;
}