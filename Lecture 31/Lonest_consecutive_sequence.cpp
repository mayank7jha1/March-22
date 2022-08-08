class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;

        for (auto x : nums) {
            s.insert(x);
        }
        int count = 0, ans = 0;
        for (int i = 0; i < nums.size(); i++) {

            if (s.find(nums[i] - 1) != s.end()) {
                continue;
            } else {
                count = 0;
                int x = nums[i];
                while (s.count(x) == 1) {
                    count++;
                    x++;
                }
                ans = max(ans, count);
            }
        }
        return ans;
    }
};