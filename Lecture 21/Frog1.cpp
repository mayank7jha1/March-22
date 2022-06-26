#include <bits/stdc++.h>
using namespace std;

int Solve(int *a, int n) {
    if (n <= 0) {
        return 0;
    }

    int option1 = INT_MAX, option2 = INT_MAX;
    if (n - 1 >= 0) {
        option1 = Solve(a, n - 1) + abs(a[n] - a[n - 1]);
    }
    if (n - 2 >= 0) {
        option2 = Solve(a, n - 2) + abs(a[n] - a[n - 2]);
    }

    int ans = min(option1, option2);
    return ans;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << Solve(a, n - 1);
}