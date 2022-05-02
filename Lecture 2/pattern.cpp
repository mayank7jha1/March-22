#include<bits/stdc++.h>
using namespace std;

int main() {
	int n, i = 1, j = 1;
	cin >> n;

	int i = 1, value = 1;

	while (i <= n) {
		j = 1;
		while (j <= i) {
			cout << value << " ";
			value = value + 1;
			j = j + 1;
		}
		i = i + 1;
		cout << endl;
	}

}