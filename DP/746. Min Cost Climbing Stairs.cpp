class Solution
{
public:
    int solve(vector<int> &cost, vector<int> &dp, int i)
    {
        if (i <= 1)
        {
            return dp[i] = cost[i];
        }
        if (dp[i] != -1)
        {
            return dp[i];
        }
        return dp[i] = min(solve(cost, dp, i - 1), solve(cost, dp, i - 2)) + cost[i];
    }
    int minCostClimbingStairs(vector<int> &cost)
    {
        vector<int> dp(cost.size() + 1, -1);
        return min(solve(cost, dp, cost.size() - 1), solve(cost, dp, cost.size() - 2));
    }
};