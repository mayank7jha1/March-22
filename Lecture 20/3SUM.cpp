#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll n, m;
int cnt[10];

int main() {
	int t;
	cin >> t;
	while (t--) {
		ll n;
		cin >> n;

		for (int i = 0; i < 10; i++) {
			cnt[i] = 0;;
		}
		for (int i = 1; i <= n; i++) {
			int x;
			cin >> x;
			x = x % 10;
			cnt[x]++;
		}

		vector<int>v;

		for (int i = 0; i <= 9; i++) {
			for (int j = 0; j < min(cnt[i], 3); j++)
			{
				v.push_back(i);
			}
		}
		// for (auto x : v) {
		// 	cout << x << " ";
		// }
		//cout << endl;
		bool flag = false;
		int len = v.size();
		for (int i = 0; i < len; i++)
		{
			for (int j = i + 1; j < len; j++)
			{
				for (int k = j + 1; k < len; k++)
				{
					if ((v[i] + v[j] + v[k]) % 10 == 3)
					{
						flag = true;
						break;
					}
				}

			}
		}
		if (flag) {
			cout << "Yes" << '\n';
		}
		else {
			cout << "No" << '\n';
		}

	}
	return 0;
}