#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int ans;
	int flag = 0;
	if (n == 0 or n == 1) {
		ans = n;
		flag = 1;
	}

	int i = 1; int square = 1;
	while (square <= n) {
		i = i + 1;
		square = i * i;
	}

	if (flag == 0) {
		cout << i - 1 << endl;
	}

}