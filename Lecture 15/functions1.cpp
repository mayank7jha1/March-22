#include<bits/stdc++.h>
using namespace std;
const int N = 0;//

int* append1(int *a, int *b) {
	int n = 4, m = 4;
	for (int i = 4; i < 8; i++) {
		a[i] = b[i - 4];
	}
	return a;
}


int main() {
	int a[] = {1, 2, 3, 4};
	int b[] = {9, 8, 7, 6};
	cout << a << endl;

	/*//a = append1(a, b);
	a = append1(a, b);*/
	int *c = append1(a, b);
	for (int i = 0; i < 8; i++) {
		cout << c[i] << endl;
	}
}