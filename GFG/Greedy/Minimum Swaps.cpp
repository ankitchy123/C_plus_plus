class Solution
{
public:
    int minimumSwaps(int c[], int v[], int n, int k, int b, int T)
    {
        // code here
        int ans = 0, curr = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            int time = ceil((float)(b - c[i]) / v[i]);
            if (time > T)
            {
                curr++;
                continue;
            }
            ans += curr;
            k--;
            if (k == 0)
            {
                return ans;
            }
        }
        return -1;
    }
};