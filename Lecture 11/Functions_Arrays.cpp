#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

void BubbleSort(int a[], int n) {
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
}

void SelectionSort(int a[], int n) {
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

}

void InsertionSort(int a[], int n) {
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
}

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	//BubbleSort(a, n);
	//SelectionSort(a, n);
	//InsertionSort(a, n);
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	sort(a + 1, a + n - 1);
	cout << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}