class Solution
{
public:
    // Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        if (s == 0)
        {
            return {-1};
        }

        int start = 0, end = 0;
        long long sum = arr[0];

        while (end < n)
        {
            if (sum < s)
            {
                end++;
                sum += arr[end];
            }
            else if (sum > s)
            {
                sum -= arr[start];
                start++;
            }
            else
            {
                return {start + 1, end + 1};
            }
        }
        return {-1};
    }
};