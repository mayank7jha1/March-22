#include<bits/stdc++.h>
using namespace std;
#define int long long


int Travel_cards() {
	int n, a, b, k, f;
	cin >> n >> a >> b >> k >> f;

	unordered_map<pair<string, string>, int>m;

	string prev_dest = "";


	for (int i = 0; i < n; i++) {

		string start_dest, ending_dest;
		cin >> start_dest >> ending_dest;

		//cout << start_dest << ending_dest << endl;
		int price;

		if (prev_dest == start_dest) {
			//This is a Transhipment
			price = b;
		} else {
			price = a;
		}
		prev_dest = ending_dest;

		if (start_dest > ending_dest) {
			swap(start_dest, ending_dest);
		}

		if (m.find({start_dest, ending_dest}) != m.end()) {

			m[ make_pair(start_dest, ending_dest)] += price;
		} else {
			//Element was not present inside the map

			//That means aap is route par first time travel
			//kar rahe ho.
			m[ make_pair(start_dest, ending_dest)] = price;
		}
	}
	vector<int>v;
	int total_cost = 0;

	for (auto x : m) {
		v.push_back(x.second);
		total_cost += x.second;
	}
	sort(v.rbegin(), v.rend());

	for (int i = 0; i < k; i++) {
		if (v[i] >= f) {
			total_cost = total_cost - v[i] + f;
		} else {
			break;
		}
	}
	return total_cost;
}







int32_t main() {
	cout << Travel_cards() << endl;;
	//cout << "Mayabk";
}


