#include<bits/stdc++.h>
using namespace std;

bool compare(int x, int y) {
	return x < y;
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (compare(a[j], a[j + 1]) == 0) {
				swap(a[j], a[j + 1]);
			}
		}
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}