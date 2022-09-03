#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];
	stack<int>s;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		s.push(a[i]);
	}

	while (!s.empty()) {
		int x = s.top();
		cout << x << endl;
		s.pop();
	}

}