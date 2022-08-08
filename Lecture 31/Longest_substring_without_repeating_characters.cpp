class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int>m;

        int ans = 0;
        for (int l = 0, r = 0; r < s.length(); r++) {
            if (m.count(s[r]) == 1) {
                l = max(l, m[s[r]] + 1);
            }
            m[s[r]] = r;
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};