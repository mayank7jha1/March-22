#include<bits/stdc++.h>
using namespace std;
// const int N = 0;


//Dynamic Arrays:

// size is not fixed

int main() {
	int n;
	cin >> n;
	vector<int>a;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		a.push_back(x);
	}
	// cout << v.capacity() << endl;
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}

	vector<int>v1 = {1, 2, 3, 4, 5};
	vector<int>v(n);

	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}


}