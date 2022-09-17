class Solution
{
public:
    int Count(int L, int R)
    {
        // Code here
        vector<bool> isPrime(R + 1, 1);
        isPrime[0] = isPrime[1] = 0;
        for (int i = 2; i <= R; i++)
        {
            if (isPrime[i])
            {
                for (int j = i * 2; j <= R; j += i)
                {
                    isPrime[j] = 0;
                }
            }
        }
        int count1 = 0, count2 = 0;
        if (L == 1)
        {
            L++;
        }
        for (int i = L; i <= R; i++)
        {
            if (isPrime[i])
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }
        return (count2 - count1);
    }
};