#include<bits/stdc++.h>
using namespace std;
// const int N = 0;



int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		int a[n] = {0};
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		int pref[n + 1] = {0};
		for (int i = 0; i < n; i++) {
			if (i == 0) {
				pref[i] = a[i];
			} else {
				pref[i] = pref[i - 1] + a[i];
			}
		}

		/*for (int i = 0; i < n; i++) {
			cout << pref[i] << " ";
		}
		cout << endl;*/
		int freq[100005] = {0};
		for (int i = 0; i < n; i++) {
			freq[pref[i]] = freq[pref[i]] + 1;
		}
		int flag = 0;
		for (int i = 1; i < 100005; i++) {
			if (freq[i] > 1) {
				flag = 1;
				break;
			}
		}

		if (flag == 1 or freq[0] > 0) {
			cout << "Yes,it has a subarray whose sum is Zero" << endl;
		} else {
			cout << "No,it doesn't contain such subarray" << endl;
		}
	}
}