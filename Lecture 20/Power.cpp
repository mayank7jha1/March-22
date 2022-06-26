#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int power(int x, int n, int i) {
	if (i > n) {
		return 1;
	}

	int ans = x * power(x, n, i + 1);

	return ans;
}

int power2(int x, int n) {
	if (n == 0) {
		return 1;
	}
	int ans = x * power2(x, n - 1);
	return ans;
}


int main() {
	int x, n;
	cin >> x >> n;
	cout << power(x, n, 1) << endl;
	cout << power2(x, n) << endl;
}