#include<bits/stdc++.h>
using namespace std;
const int N = 0;

int peak_index_in_mountain_array(vector<int>&a) {
	int n = a.size();
	int s = 0, e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;
		if (a[mid] < a[mid + 1]) {
			s = mid + 1;
		} else {
			e = mid - 1;
			ans = mid;
		}
	}
	return ans;
}

int main() {
	int n;
	cin >> n;
	// int a[n];
	vector<int>a(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << peak_index_in_mountain_array(a);
}