#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	int n;
	cin >> n;
	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	/*	int freq[10006] = {0};
		//Normal and most used:
		for (int i = 0; i < n; i++) {
			freq[a[i]] = freq[a[i]] + 1;
		}

		for (int i = 0; i < 10005; i++) {
			if (freq[i] > 0) {
				cout << i << " is " << freq[i] << endl;
			}
		}
		cout << endl;

		//Second Method:
		int minimum = *min_element(a, a + n);
		int maximum = *max_element(a, a + n);

		int freq2[maximum - minimum + 1] = {0};
		for (int i = 0; i < n; i++) {
			freq2[a[i] - minimum]++;
		}
		for (int i = 0; i < maximum - minimum + 1; i++) {
			if (freq2[i] > 0) {
				cout << i + minimum << " is " << freq2[i] << endl;
			}
		}
	*/
	//Negative Element

	int freq3[10006] = {0};
	int minimum = *min_element(a, a + n);
	//cout << minimum << endl;
	//Array ka 0 index will point to minimum:
	//0 index in the in normal array will shift to minimum+0;

	//Normal and most used:
	for (int i = 0; i < n; i++) {
		freq3[a[i] - minimum] = freq3[a[i] - minimum] + 1;
	}

	for (int i = 0; i < 10005; i++) {
		if (freq3[i] > 0) {
			cout << i + minimum << " is " << freq3[i] << endl;
		}
	}
	cout << endl;


}