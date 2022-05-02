#include<iostream>
using namespace std;


int main() {
	int n;
	cin >> n;
	int i = 1;
	int ans = 0;
	while (i <= n) {
		int x;
		cin >> x;
		ans = ans ^ x;
		i = i + 1;
	}
	cout << ans << endl;
}