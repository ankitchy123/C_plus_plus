class Solution
{
public:
    long long int numberOfPaths(int m, int n)
    {
        // code here
        vector<vector<long long int>> dp(m, vector<long long int>(n, 1));
        long long int mod = 1e9 + 7;

        for (int i = 1; i < m; i++)
        {
            for (int j = 1; j < n; j++)
            {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - 1]) % mod;
            }
        }
        return dp[m - 1][n - 1];
    }
};