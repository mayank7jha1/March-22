#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n, m;
	cin >> n >> m;

	int a[n], b[m];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	int c[n + m];
	for (int i = 0; i < n; i++) {
		c[i] = a[i];
	}
	for (int j = n; j < n + m; j++) {
		c[j] = b[j - n];
	}

	for (int i = 0; i < n + m; i++) {
		cout << c[i] << " ";
	}


// // float = 32 bits:
// 	// decimal = double
// 	float x = 10.34345;
// 	float y = 26.93211;

// 	double z =  x * y;
// 	cout << z << endl;

}

