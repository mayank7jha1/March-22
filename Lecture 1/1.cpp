#include<iostream>
using namespace std;



int main() {
	int n, k, t;
	cin >> n >> k >> t;
	int i = k;
	while (i < n + k) {
		cout << i - k + 1 << " ";
		i = i + 1;
	}

}