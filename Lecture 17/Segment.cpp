#include<bits/stdc++.h>
using namespace std;
// const int N = 0;
#define ll long long

vector<ll>primes;
ll N = 100001;

void Prime_seive() {
	bool p[N];
	//memset(p, 1, sizeof(p));
	for (int i = 0; i < 100005; i++) {
		p[i] = 1;
	}

	for (int i = 3; i * i <= N; i = i + 2) {
		if (p[i] == 1) {
			for (int j = i * i; j <= N; j = j + i) {
				p[j] = 0;
			}
		}
	}
	primes.push_back(2);
	for (int i = 3; i <= N; i = i + 2) {
		if (p[i] == 1) {
			primes.push_back(i);
		}
	}
}


void Segmented_Sieve(ll a, ll b) {
	bool p[b - a + 1];
	memset(p, 1, sizeof(p));

	for (int i = 0; primes[i]*primes[i] <= b; i++) {
		ll start = ((a / primes[i]) * primes[i]);
		if (start < a) {
			start = start + primes[i];
		}
		for (int j = start; j <= b; j = j + primes[i]) {
			p[j - a] = 0;
		}
		if (start == primes[i]) {
			p[start - a] = 1;
		}
	}
	for (ll j = a; j <= b; j++) {
		if (p[j - a] == 1) {
			cout << j << " ";
		}
	}
	cout << endl;
}
int main() {
	Prime_seive();
	int t;
	cin >> t;
	while (t--) {
		ll a, b;
		cin >> a >> b;
		if (a == 1) {
			a++;
		}
		Segmented_Sieve(a, b);
	}

}