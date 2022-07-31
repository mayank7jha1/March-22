#include<bits/stdc++.h>
using namespace std;
const int N = 0;



int main() {

	priority_queue<int, vector<int>, greater<int>>pq;

	vector<int>v {1, 2, 3, 4, 5};

	for (int i = 0; i < v.size(); i++) {
		pq.push(v[i]);
	}

	int k;
	cin >> k;
	int maximum = -1;

	while (k > 0) {
		maximum = pq.top();
		pq.pop();
		k--;
	}
	cout << maximum << endl;
}