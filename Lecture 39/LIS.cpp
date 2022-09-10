class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>dp(nums.size(), 1);

        for (int i = 0; i < nums.size(); i++) {
            for (int j = 0; j < i; j++) {
                if (nums[i] > nums[j] and dp[i] < dp[j]) {
                    dp[i] = dp[i] + 1;
                }
            }
        }

        int ans = *max_element(dp.begin(), dp.end());
        return ans;
    }
};