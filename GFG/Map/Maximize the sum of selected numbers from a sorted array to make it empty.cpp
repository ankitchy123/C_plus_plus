class Solution
{
public:
    int maximizeSum(int a[], int n)
    {
        // Complete the function
        map<int, int> mp;
        // {1,1}, {2,3}, {3,1}, {4,1}
        for (int i = 0; i < n; i++)
        {
            mp[a[i]]++;
        }

        int ans = 0;

        for (int i = n - 1; i >= 0; i--)
        {
            if (mp[a[i]] > 0)
            {
                if (mp[a[i] - 1] > 0)
                {
                    mp[a[i] - 1]--;
                }
                ans += a[i];
                mp[a[i]]--;
            }
        }

        return ans;
    }
};