#include<iostream>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int sum = 0;
	while (n > 0) {
		int digit = n % 10;
		n = n / 10;
		sum = sum + digit;
	}
	cout << sum << endl;
}