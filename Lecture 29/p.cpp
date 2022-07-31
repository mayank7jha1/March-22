#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {

	int n;
	cin >> n;

	unordered_map<int, int>m;
	for (int i = 0; i < n; i++) {
		int x, t;
		cin >> x >> t;
		m.insert({x, t});
	}

	for (auto x : m) {
		cout << x.first << " " << x.second << endl;
	}


	//Function : Find and Count:


	auto it = m.find(21);  //find function returns iterator and count: bool true / false.

	if (it == m.end()) {
		cout << "Element Doesn't Exist" << endl;
	}

	if (m.count(21)) {
		cout << "Element Exist" << endl;
	}

	// for (auto it = m.begin(); it != m.end(); it++) {
	// 	if ((*it).first == key) {
	// 		cout << "Yes";
	// 	}
	// }
	// cout << "No";

}


// Q: Check if the key already exists or not inside the map / unordered_map ?

// map 					unordered_map

// O(logn)					O(1)
// BST and SBT				hashing
// Unique					Unique
// You can key				Yo cannot
// as pair
// sorted / Ordered 			Unsorted / Unoredered



// Multimap