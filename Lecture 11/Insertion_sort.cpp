#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int temp;
	for (int i = 1; i < n; i++) {
		temp = a[i];
		int j = i - 1;
		while (j >= 0 and a[j] > temp) {
			a[j + 1] = a[j];
			j = j - 1;
		}
		a[j + 1] = temp;
	}



	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}