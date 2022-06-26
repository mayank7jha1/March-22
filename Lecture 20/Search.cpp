#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool search(int a[], int s, int target) {
	if (s < 0) {
		return false;
	}

	if (a[s] == target) {
		return true;
	}

	//Next Stage:

	return search(a, s - 1, target);
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	int target;
	cin >> target;
	if (search(a, n - 1, target)) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}