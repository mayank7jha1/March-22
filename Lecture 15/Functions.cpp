#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

char* append1(char *a, char* b) {
	int n = 0;
	for (int i = 0; a[i] != '\0'; i++) {
		n++;
	}
	int m = 0;
	for (int i = 0; b[i] != '\0'; i++) {
		m++;
	}
	for (int i = n; i < n + m; i++) {
		a[i] = b[i - n];
	}
	a[n + m] = '\0';

	return a;
}

int main() {
	char a[] = {"Mayank"};
	char b[] = {"Samyak"};

	cout << append1(a, b);
	cout << a << " " << b << endl;
}