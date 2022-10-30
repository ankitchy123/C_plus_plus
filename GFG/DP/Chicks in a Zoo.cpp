class Solution
{
public:
    long long int NoOfChicks(int n)
    {
        // Code here
        vector<long long> vec(n, 0);
        if (n == 1)
        {
            return 1;
        }
        long long ans = 1;
        vec[0] = 1;
        for (int i = 1; i < n; i++)
        {
            if (i >= 6)
            {
                ans -= vec[i - 6];
            }
            vec[i] = ans * 2;
            ans += (ans * 2);
        }
        return ans;
    }
};