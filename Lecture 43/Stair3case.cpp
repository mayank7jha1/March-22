#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int ans = INT_MAX;
int *a;
bool *visited;

void StairCase(int n, int stair, int step) {

	if (stair == n) {
		//Steps calculate:
		ans = min(ans, step);
		return;
	}

	visited[stair] = 1;

	if (stair + 1 <= n and !visited[stair + 1]) {
		StairCase(n, stair + 1, step + 1);
	}
	if (stair + a[stair] <= n and (stair + a[stair]) >= 0
	        and !visited[stair + a[stair]]) {
		StairCase(n, stair + a[stair], step + 1);
	}
	visited[stair] = 0;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		a = new int[n + 1];
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		visited = new bool[10000] {0};
		StairCase(n, 0, 0);
		if (ans == INT_MAX) {
			cout << -1 << " ";
		} else {
			cout << ans << endl;
		}
	}
}