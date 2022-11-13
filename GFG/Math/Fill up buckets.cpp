class Solution
{
public:
    int totalWays(int n, vector<int> capacity)
    {
        // code here
        long long int ans = 1;
        int mod = 1000000007;
        sort(capacity.begin(), capacity.end());
        for (int i = 0; i < n; i++)
        {
            ans *= (capacity[i] - i);
            ans %= mod;
        }

        return ans;
    }
};