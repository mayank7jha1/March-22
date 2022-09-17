#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

bool compare(int x, int y) {

	if (x < y) {
		return true;
	} else {
		return false;//comparator false tabhi swap hoga:
	}
}

int main() {
	// int a[] = {1, 3, 4, 2, 9, 5};
	vector<int> a = {1, 3, 4, 2, 9, 5};
	int n = 6;


	// sort(a, a + n);
	//sort(a.rbegin(), a.rend());
	// sort function ne pehle asc order  me sortkar diya and then r ne usko
	// reverse kar diya.

	sort(a.begin(), a.end(), compare);
	// x fir y and x agar bada hain to swap nahi karna toh


	for (auto x : a) {
		cout << x << " ";
	}
}

// .begin iterator: sort ke ander to sort ke ander and baaki functions
// ka matalb stl baaki stl ke ander bhi kuch extra iterators hote hain jaise
// ki r


// f() {
// 	f() {
// 		if (a[i] > a[j]) {

// 		}
// 	}
// }

// asc.



// 5 1 2 3

// bubble sort humne humne:


// bubble:

// if (a[i] < a[i + 1]) {

// }


// if (x < y) {
// kuch mat karo:
// } else if (x > y) {
// swap:
// }
