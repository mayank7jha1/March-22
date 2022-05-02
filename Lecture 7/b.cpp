#include<iostream>
using namespace std;
#define size 100005



int main() {
	int n;
	cin >> n;
	int a[n] = {0};
	for (int i = 0; i < n; i = i + 1) {
		cin >> a[i];
	}
	/*for (int i = 0; i < n; i = i + 3) {
		cout << a[i] << " ";
	}*/

	/*	for (int x : a) {
			cout << x << " ";
		}
	*/

	int freq[size] = {0};

	/*for (int i = 0; i < n; i = i + 1) {
		freq[a[i]] = freq[a[i]] + 1;
	}*/

	for (auto x : a) {
		freq[x] = freq[x] + 1;
	}

	/*for (auto x : freq) {
		if(x>0){
			cout<<
		}
	}*/

	for (int i = 0; i < size; i++) {
		if (freq[i] > 0) {
			while (freq[i] > 0) {
				cout << i << " ";
				freq[i] = freq[i] - 1;
			}
		}
	}


}