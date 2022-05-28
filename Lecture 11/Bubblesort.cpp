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
		/*Kitne No. of largest numbers aapko
		nikalne hain:*/
		for (int j = 0; j < n - i - 1; j++) {
			/*
				Comparison ke liye:
			*/
			if (a[j] > a[j + 1]) {
				swap(a[j], a[j + 1]);
			}
		}
	}


	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}