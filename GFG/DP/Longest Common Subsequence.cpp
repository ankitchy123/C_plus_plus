class Solution
{
public:
    // Function to find the length of longest common subsequence in two strings.
    int lcs(int x, int y, string s1, string s2)
    {
        // your code here
        vector<vector<int>> dp(x + 1, vector<int>(y + 1, 0));
        for (int i = x - 1; i >= 0; i--)
        {
            for (int j = y - 1; j >= 0; j--)
            {
                int ans = 0;
                if (s1[i] == s2[j])
                {
                    ans = 1 + dp[i + 1][j + 1];
                }
                else
                {
                    ans = max(dp[i + 1][j], dp[i][j + 1]);
                }
                dp[i][j] = ans;
            }
        }
        return dp[0][0];
    }
};