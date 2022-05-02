#include<iostream>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;

	int i = 1;
	int a, b, c;
	int count = 0;
	int sum = 0;
	// cin >> a >> b >> c;
	while (i <= n) {
		// int sum = 0;
		cin >> a >> b >> c;
		sum = a + b + c;
		if (sum >= 2) {
			count = count + 1;
		}
		i = i + 1;
	}
	cout << count << endl;
}