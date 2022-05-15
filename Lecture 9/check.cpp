#include <iostream>
using namespace std;
#define ll long long
#define size 205
int32_t main()
{
    ll n, m, k ;
    cin >> n >> m >> k;
    ll a[n + 1] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll l[size], r[size], d[size];
    for (int i = 1; i <= m; i++) {
        cin >> l[i] >> r[i] >> d[i];
    }
    ll count[size] = {0};
    ll diff[size] = {0};
    for (int i = 1 ; i <= k ; i++) {
        int x, y;
        cin >> x >> y;
        count[x]++;
        count[y + 1]--;
    }
    for (int i = 1; i <= m; ++i)
    {
        count[i] += count[i - 1];
    }
    for (int i = 1; i <= m; ++i)
    {
        diff[l[i]] += count[i] * d[i];
        diff[r[i] + 1] -= count[i] * d[i];
    }
    for (int i = 1; i <= n ; ++i)
    {
        diff[i] += diff[i - 1];
    }
    for (int i = 1; i <= n ; ++i)
    {
        a[i] += diff[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        cout << a[i] << " ";
    }
    return 0;
}