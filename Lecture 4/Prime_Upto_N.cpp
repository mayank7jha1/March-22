#include<bits/stdc++.h>
using namespace std;

//N: {1,N};
/*
{2-N-1} and check if n is divisible
by any number in between the set.*/

int main() {
	int n;
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
	}
}