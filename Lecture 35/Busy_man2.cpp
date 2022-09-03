#include<bits/stdc++.h>
using namespace std;

class act {
public:
	int starting, ending;
}

arr[100000];

bool compare(act a, act b) {
	if (a.ending < b.ending) {
		return true;
	}
	if (a.ending == b.ending) {
		return (a.starting < b.starting);
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t, n, cnt, prevendtime;
	cin >> t;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; i++) {
			scanf("%d%d", &arr[i].starting, &arr[i].ending);
		}
		sort(arr, arr + n, compare);
		cnt = 1;
		prevendtime = arr[0].ending;
		for (int i = 1; i < n; i++) {
			if (prevendtime <= arr[i].starting) {
				cnt++;
				prevendtime = arr[i].ending;
			}
		}
		printf("%d\n", cnt);
	}
}