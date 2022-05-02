#include<bits/stdc++.h>
using namespace std;

int main() {
	/*int n;
	cin >> n;
	int i = 3;
	int flag;
	if (n >= 2) {
		cout << 2 << " ";
	}

	while ( i <= n) {
		int j = 2;
		flag = 0;
		while (j <= i - 1 and (flag == 0)) {
			if (i % j == 0) {
				flag = 1;
			}
			j = j + 1;
		}
		if (flag == 0) {
			cout << i << " ";
		}
		i = i + 1;
	}*/

	int n;
	cin >> n;
	int flag;
	if (n >= 2) {
		cout << 2 << " ";
	}
	for (int i = 3; i <= n; i = i + 1) {
		flag = 0;
		for (int j = 2; j <= i - 1 and (flag == 0); j = j + 1) {
			if (i % j == 0) {
				flag = 1;
			}
		}
		if (flag == 0) {
			cout << i << " ";
		}
	}
}