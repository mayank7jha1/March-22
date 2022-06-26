#include<bits/stdc++.h>
using namespace std;
// const int N = 0  ;

int main() {
	int n, m;
	cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	int sum = 0;
	int ans = 0, ans1 = 0;;
	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < m; j++) {
			sum += a[i][j];
		}
		ans = max(sum, ans);
	}

	for (int i = 0; i < n; i++) {
		sum = 0;
		for (int j = 0; j < m; j++) {
			sum += a[j][i];
		}
		ans1 = max(sum, ans1);
	}

	cout << ans << " " << ans1 << endl;

}