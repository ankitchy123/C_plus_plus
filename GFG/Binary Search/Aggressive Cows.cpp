class Solution
{
public:
    bool check(vector<int> stalls, int k, int mid, int n)
    {
        int lastPlaced = stalls[0];
        int count = 1;

        for (int i = 1; i < n; i++)
        {
            if (stalls[i] - lastPlaced >= mid)
            {
                count++;
                lastPlaced = stalls[i];
            }
        }
        if (count >= k)
        {
            return true;
        }
        return false;
    }
    int solve(int n, int k, vector<int> &stalls)
    {
        // Write your code here
        sort(stalls.begin(), stalls.end());
        int low = 1, high = stalls[stalls.size() - 1] - stalls[0];

        while (low <= high)
        {
            int mid = low + (high - low) / 2;
            if (check(stalls, k, mid, n))
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        return high;
    }
};