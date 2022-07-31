class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>m;
        for (auto x : nums) {
            m[x]++;
        }
        vector<int>ans;
        priority_queue < pair<int, int>>pq;

        if (m.size() == k) {
            for (auto x : m) {
                v.push_back(x.first);
            }
        }

        for (auto x : m) {
            pq.push({x.second, x.first});
        }

        while (k--) {
            int element = pq.top().second;
            ans.push_back(element);
            pq.pop();
        }
        return ans;
    }
};