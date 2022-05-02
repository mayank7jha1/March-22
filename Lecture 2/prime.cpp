#include<bits/stdc++.h>
using namespace std;
// const int N = 10001;

int main() {
	int t;
	cin >> t;
	while (t > 0) {
		int n;
		cin >> n;
		int flag = 0;

		if ((n == 1 or n == 2) || n == 3) {
			flag = -1;
		}
		int i = 2;
		while ((flag != 1 and flag != -1) and i < n) {
			if (n % i == 0) {
				flag = 1;
			}
			i = i + 1;
		}

		if (flag == -1 or flag == 0) {
			cout << "Prime" << endl;
		} else {
			cout << "Not Prime" << endl;
		}
		t = t - 1;
	}
}