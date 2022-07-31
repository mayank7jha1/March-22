class Solution {
public:
	string frequencySort(string s) {

		unordered_map<char, int>um;
		for (int i = 0; i < s.length(); i++) {
			um[s[i]]++;
		}

		//Priority queue i want to sort ya
		//maximum out of frequency;

		priority_queue<pair<int, char>>pq;

		for (auto x : um) {
			pq.push(make_pair(x.second, x.first));
		}

		string ans = "";
		while (!pq.empty()) {
			int data = pq.top().first;

			while (data--) {
				ans += pq.top().second;
			}
			pq.pop();
		}
		return ans;
	}
};