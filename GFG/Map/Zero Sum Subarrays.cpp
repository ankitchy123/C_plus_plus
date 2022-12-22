class Solution
{
public:
    // Function to count subarrays with sum equal to 0.
    long long int findSubarray(vector<long long int> &arr, int n)
    {
        // code here
        long long int sum = 0, ans = 0;
        map<long long int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            sum += arr[i];
            if (sum == 0)
            {
                ans++;
            }
            if (mp.find(sum) != mp.end())
            {
                ans += mp[sum];
            }
            mp[sum]++;
        }
        return ans;
    }
};