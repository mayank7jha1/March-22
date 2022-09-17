#include<bits/stdc++.h>
using namespace std;
// const int N = 0;

int main() {
	vector<int>a = {1, 2, 333, 5, 42, 11};
	string s = "";
	for (auto x : a) {
		s = s + to_string(x);
	}
	cout << s;
}