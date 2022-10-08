class Solution
{
public:
    bool isPrime(int n)
    {
        if (n == 1)
        {
            return true;
        }
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    int left(int n)
    {
        for (int i = n; i > 0; i--)
        {
            if (isPrime(i))
            {
                return i;
            }
        }
    }
    int right(int n)
    {
        for (int i = n; i < INT_MAX; i++)
        {
            if (isPrime(i))
            {
                return i;
            }
        }
    }
    int NthTerm(int N)
    {
        // Code here
        if (N == 1)
        {
            return 1;
        }
        int l = left(N);
        int r = right(N);
        int ans = min(N - l, r - N);
        return ans;
    }
};