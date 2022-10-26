class Solution
{
public:
    int findMin(int n, char a[])
    {
        // code here
        int r = 0, g = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == 'R')
            {
                r++;
            }
            else if (a[i] == 'G')
            {
                g++;
            }
            else
            {
                b++;
            }
        }
        if ((r % 2 == 0 && g % 2 == 0 && b % 2 == 0) || (r % 2 == 1 && g % 2 == 1 && b % 2 == 1))
        {
            return 2;
        }
        return 1;
    }
};