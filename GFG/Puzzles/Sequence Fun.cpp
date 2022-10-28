class Solution
{
public:
    int NthTerm(int n)
    {
        if (n == 1)
        {
            return 2;
        }
        // Code  here
        long long int temp = 2, mod = 1e9 + 7;
        for (int i = 2; i <= n; i++)
        {
            temp = ((temp * i) + 1) % mod;
        }
        return temp % mod;
    }
};