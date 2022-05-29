// Created by Mayank

#include <bits/stdc++.h>
using namespace std;

bool compare(int a, int b) {
	return a > b;
}

void bubbleSort(int a[], int n, bool (cmp)(int a, int b)) {
	for (int i = 0; i < n - 1; i++) {//Passes
		int flag = 0;
		for (int j = 0; j < n - i - 1; j++) {
			if (cmp(a[j], a[j + 1])) {
				flag = 1;
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
		if (flag == 0) {
			break;
		}
	}
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int a[] = {6, 7, 9, 1, 2, 5};
	int n = sizeof(a) / sizeof(int);
	//sort(a, a + n, compare);
	bubbleSort(a, n, compare);
	for (auto x : a) {
		cout << x << endl;
	}
	return 0;
}
