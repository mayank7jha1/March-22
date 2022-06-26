#include<bits/stdc++.h>
using namespace std;

bool compare(int x, int y) {
	/*if (x > y) {
		return 0;
	} else {
		return 1;
	}*/

	return x > y;
}

int main() {

	int a[] = {5, 4, 13, 2, 1};
	int n = sizeof(a) / sizeof(int);

	sort(a, a + n, compare);

	for (auto x : a) {
		cout << x << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}










}