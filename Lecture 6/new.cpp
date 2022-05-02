#include<iostream>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		cout << a[i] << " ";
	}
	cout << endl;

	/*for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}*/
	// int flag = 0;
	int i;
	for (i = 0; i < n; i++) {
		if (a[i] == 17) {
			break;
		}
	}
	// if (flag == 1) {
	// 	cout << "Yes" << endl;
	// } else {
	// 	cout << "No" << endl;
	// }
	if (i <= 10) {
		cout << "Yes" << endl;
	} else {
		cout << "No" << endl;
	}
}