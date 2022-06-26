#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
int key;//Element to searched in the array

int Binary_Search(int a[], int n) {
	int s = 0, e = n - 1;
	int ans = -1;
	while (s <= e) {
		int mid = (s + e) / 2;//middle point index
		if (a[mid] == key) {
			ans = mid;
			break;
		} else if (a[mid] < key) {
			s = mid + 1;
		} else {
			e = mid - 1;
		}
	}
	return ans;
}


int main() {

	int n;
	cin >> n;//Size of the array

	int a[n];//Array with size n.
	//Input for the array

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	cin >> key;

	int ans = Binary_Search(a, n);
	if (ans == -1) {
		cout << "Element Not Found" << endl;
	} else {
		cout << "Element is found at Index: " << ans << endl;
	}

}