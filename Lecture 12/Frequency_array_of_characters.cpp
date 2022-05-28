#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	/*int a[] = {1, 1, 1, 1, 1, 2, 2, 2, 2, 3, 4, 4, 5, 6};
	int n = sizeof(a) / sizeof(int);
	int freq[100005] = {0};
	for (int i = 0; i < n; i++) {
		freq[a[i]] = freq[a[i]] + 1;
	}
	for (int i = 0; i < 100005; i++) {
		if (freq[i] > 0) {
			cout << "Frequency of "
			     << i << " is " << freq[i] << endl;
		}
	}*/

	char ch[100];
	cin >> ch;
	// cout << ch;

	int freq[256] = {0};
	for (int i = 0; ch[i] != '\0'; i++) {
		freq[ch[i]] = freq[ch[i]] + 1;
	}

	for (int i = 0; i < 256; i++) {
		if (freq[i] > 0) {
			cout << "Frequency of "
			     << char(i) << " is " << freq[i] << endl;
		}
	}

}