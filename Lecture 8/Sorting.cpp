#include<bits/stdc++.h>
using namespace std;

/*
	Sort with a Comparator
*/

bool compare(int x, int y) {
	return x > y;
}

int Solve(int *a, int n) {
	//sort(a, a + n, compare);
	sort(a, a + n, [&](int x, int y) {
		return x > y;
	});
}




int random_in_range(int minimum, int maximum) {
	thread_local std::ranlux48 rng(std::chrono::system_clock::now().time_since_epoch().count());
	return std::uniform_int_distribution <int> ( minimum, maximum )(rng);
}


int main() {
	int n;
	cin >> n;

	int a[n];

	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	Solve(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}

	/*
		Randomisation of array:
	*/

	//Rand Function and Srand Function
	//srand(time(0));

	// for (int i = 0; i < 5; i++) {
	// 	cout << 10 + (rand() % 10) << endl;
	// }

	/*for (int i = 0; i < 1001; i++) {
		cout << -1 + (rand() % 1000) << endl;
	}*/

	// for (int i = 0; i < 5; i++) {
	// 	cout << 100 + (rand() % 13) << endl;
	// }


	/*for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	*/

	/*int set1 = random_in_range(100, 999);
	cout << set1 << endl;*/
	/*
		int a[1000] = {0};
		for (int i = 0; i < 996; i++) {
			a[i] = random_in_range(1, 999);
		}

		int freq[1000] = {0};
		for (int i = 0; i < 1000; i++) {
			freq[a[i]]++;
		}

		for (int i = 0; i < 1000; i++) {
			if (freq[i] > 1) {
				cout << i << " " << freq[i] << endl;
			}
		}
	*/

}