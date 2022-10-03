class Solution
{
public:
    int solve(int n)
    {
        int ans = 0;
        if (n == 1)
        {
            return 1;
        }
        set<int> st;
        for (int i = 2; i <= n; i++)
        {
            while (n % i == 0)
            {
                st.insert(i);
                n = n / i;
            }
        }
        for (auto i : st)
        {
            ans += i;
        }
        return ans;
    }

    int sumOfAll(int l, int r)
    {
        // code here
        int ans = 0;
        for (int i = l; i <= r; i++)
        {
            ans += solve(i);
        }
        return ans;
    }
};