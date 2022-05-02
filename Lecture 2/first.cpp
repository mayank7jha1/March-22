#include<bits/stdc++.h>
using namespace std;
const int N = 100005;

int main() {
	int n, z;
	cin >> n >> z;
	int difference = (n - z) / 2;
	int x = n - difference;
	while (n >= x) {
		cout << n << " ";
		n = n - 1;
	}
	while (z < x) {
		cout << z << " ";
		z = z + 1;
	}
}