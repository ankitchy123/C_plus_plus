class Solution
{
public:
    // Function to reverse every sub-array group of size k.
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        // code here
        int start = 0;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            count += 1;
            if (count % k == 0)
            {
                reverse(arr.begin() + start, arr.begin() + count);
                start = count;
            }
        }

        if (count > 0)
        {
            reverse(arr.begin() + start, arr.end());
        }
    }
};