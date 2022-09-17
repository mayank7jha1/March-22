class Solution {

    int Stairs(vector<int>&cost, int i, int n, int *dp) {
        if (i >= n) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }
        int option1 = option2 = INT_MAX;
        int option1 = Stairs(cost, i + 1, n, dp) + cost[i];
        int option2 = Stairs(cost, i + 2, n, dp) + cost[i];

        return dp[i] = min(option1, option2);
    }
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int dp[cost.size() + 1];
        int n = cost.size();

        memset(dp, -1, sizeof(dp));
        int option1 = Stairs(cost, 0, n, dp);

        memset(dp, -1, sizeof(dp));
        int option2 = Stairs(cost, 1, n, dp);

        return min(option1, option2);

    }
};