// Created by Mayank

#include <iostream>
using namespace std;

int sum(int p[]) {
	int n = sizeof(p) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += p[i];
	}
	return sum;
	//function se kabhi bhi array ko return nahi kar sakta
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//int a[] = {1, 2, 3, 4, 5};
	// cout << a << endl;
	// cout << a + 0 << endl;
	// cout << *(a + 2) << endl;
	// cout << a[2] << endl;
	// cout << &a[0] << endl;

	// //Pointer

	// // (a+2)==(size of type pointer)*2
	// int x = 10;
	// int* xptr = &x;
	// char ch = 'A';
	// char* chptr = &ch;

	// cout << sizeof(xptr) << endl;
	// cout << sizeof(chptr) << endl;

	// int* p = 0;

	// p = a;
	// a = p;//This is illegal

	// p++; p + 1;
	// a++;//Illegal

	// p++;
	// p = p + 1;
	// a++;
	// a = a + 1;

	int a[] = {1, 2, 3, 4, 5};
	int n = sizeof(a) / sizeof(int);
	cout << n << endl;

	cout << sum(a);





	return 0;
}