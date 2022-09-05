class Solution
{
public:
    int smallestSumSubarray(vector<int> &a)
    {
        // Code here
        int ans = INT_MAX;
        int curr = 0;
        for (int i = 0; i < a.size(); i++)
        {
            curr += a[i];
            ans = min(curr, ans);
            if (curr > 0)
            {
                curr = 0;
            }
        }
        return ans;
    }
};