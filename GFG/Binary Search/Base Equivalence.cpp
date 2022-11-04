class Solution
{
public:
    int countDigits(int n, int m)
    {
        int count = 0;
        while (n > 0)
        {
            count++;
            n /= m;
        }
        return count;
    }
    string baseEquiv(int n, int m)
    {
        // code here
        int s = 2, e = 32;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            int digits = countDigits(n, mid);
            if (digits == m)
            {
                return "Yes";
            }
            else if (digits < m)
            {
                e = mid - 1;
            }
            else
            {
                s = mid + 1;
            }
        }
        return "No";
    }
};