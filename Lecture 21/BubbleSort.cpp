#include<iostream>
using namespace std;

void bubblesort(int *a, int i, int n) {
	if (i >= n) {
		return;
	}

	// Work:
	for (int i = 0; i < n; i++) {
		if (a[i] > a[i + 1]) {
			swap(a[i], a[i + 1]);
		}
	}

	bubblesort(a, i + 1, n);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	bubblesort(a, 0, n - 1);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}