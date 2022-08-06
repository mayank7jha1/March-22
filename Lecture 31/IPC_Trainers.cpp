#include<bits/stdc++.h>
using namespace std;

#define int long long
#define As 2005

int IPC_Trainers() {
	int Total_Trainers, days;
	cin >> Total_Trainers >> days;

	int startday[As] = {0}, lectures[As] = {0}, sadness[As] = {0};
	priority_queue<pair<int, int>>pq;

	for (int i = 0; i < Total_Trainers; i++) {
		cin >> startday[i] >> lectures[i] >> sadness[i];
		pq.push({sadness[i], i});
	}

	set<int>s;
	int Lectures_Taken[As] = {0};

	for (int i = 1; i <= days; i++) {
		s.insert(i);
	}

	while (!pq.empty()) {
		pair<int, int> x = pq.top();
		pq.pop();

		int index = x.second;
		int kis_din_aayega = startday[index];

		//Aaakhari din jab vo lecture ideally lesakta hain:
		int end = kis_din_aayega + lectures[index] - 1;

		for (int i = kis_din_aayega; i <= end; i++) {
			auto f = s.lower_bound(i);
			if (f == s.end()) {
				break;
			} else {
				Lectures_Taken[index] += 1;
				s.erase(f);
			}
		}
	}

	int Total_sadness = 0;
	for (int i = 0; i < Total_Trainers; i++) {
		Total_sadness += ((lectures[i] - Lectures_Taken[i]) * sadness[i]);
	}
	return Total_sadness;
}


int32_t main() {
	int t;
	cin >> t;
	while (t--) {
		cout << IPC_Trainers() << endl;;
	}

}