class Solution
{
public:
    long long int maxSumLCM(int n)
    {
        // code here
        long long int ans = 0;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {
                    ans += i;
                }
                else
                {
                    ans += i + n / i;
                }
            }
        }
        return ans;
    }
};