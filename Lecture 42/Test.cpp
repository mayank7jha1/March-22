#include <iostream>
#define int long long
using namespace std;

/*ll maximum(ll x, ll y) {
	if (x > y) {
		return x;
	} else {
		return y;
	}
}

ll minimum(ll x, ll y) {
	if (x > y) {
		return y;
	} else {
		return x;
	}
}*/


int32_t main() {
	/*int n, m;
	cin >> n >> m;
	int size = n / m;
	int rem = n % m;
	ll ans = (rem * ((size + 1) * (size))) / 2 + ((m - rem) * (size) * (size - 1)) / 2;
	cout << ans << " ";

	ll x = n - (m - 1);
	cout << (x * (x - 1)) / 2;*/



	int ans = 1000000000;
	int ans1 = 1000000000012;

	// ll a[n];

	int value = max(ans1, ans);
	int value1 = min(ans, ans1);
	int value3 = max(value1, value);
	cout << value3 << endl;

}