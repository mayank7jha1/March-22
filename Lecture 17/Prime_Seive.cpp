#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define int long long
bool prime[100005];

void Prime_seive(int n) {
	/*for (int i = 0; i < 100005; i++) {
		prime[i] = 1;
	}*/
	memset(prime, true, sizeof(prime));

	for (int i = 3; i * i <= n; i = i + 2) {
		if (prime[i] == 1) {
			for (int j = i * i; j <= n; j = j + i) {
				prime[j] = 0;
			}
		}
	}

}
void print_prime(int n, int m) {
	if (n <= 2) {
		cout << 2 << " ";
	}
	if (n % 2 == 0) {
		n = n + 1;
	}
	for (int i = n; i <= m; i = i + 2) {
		if (prime[i] == 1) {
			cout << i << " ";
		}
	}
	cout << endl << endl;
}

int32_t main() {
	//Precomputation
	Prime_seive(100005);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		print_prime(n, m);
	}

}