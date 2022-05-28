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


	for (int i = 0; i < n - 1; i++) {
		/*
			Total positions we have to fill
			the smallest elements.
		*/
		int minimum = i;
		for (int j = i + 1; j < n; j++) {
			/*
			We are comparing and finding the min.
			index in the array.
			*/
			if (a[j] < a[minimum]) {
				minimum = j;
			}
		}
		swap(a[i], a[minimum]);
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}