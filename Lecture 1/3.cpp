#include<bits/stdc++.h>
using namespace std;


int main() {
	int n, k, z;
	cin >> n >> k >> z;
	int i = k;
	while (i < n + k) {
		if ((i - k + 1 ) % z != 0) {
			cout << i - k + 1 << " ";
		}
		i = i + 1;
	}
}