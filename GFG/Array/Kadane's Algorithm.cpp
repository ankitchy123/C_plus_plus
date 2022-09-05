class Solution
{
public:
    // arr: input array
    // n: size of array
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n)
    {

        // Your code here
        int ans = INT_MIN, curr = 0;
        for (int i = 0; i < n; i++)
        {
            curr += arr[i];
            ans = max(ans, curr);
            if (curr < 0)
            {
                curr = 0;
            }
        }
        return ans;
    }
};
