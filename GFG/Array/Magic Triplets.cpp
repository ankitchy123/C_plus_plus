class Solution
{
public:
    int countTriplets(vector<int> nums)
    {
        // Code here.
        int ans = 0;
        for (int i = 1; i < nums.size() - 1; i++)
        {
            int s = 0;
            for (int j = i - 1; j >= 0; j--)
            {
                if (nums[j] < nums[i])
                {
                    s++;
                }
            }

            int g = 0;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[j] > nums[i])
                {
                    g++;
                }
            }
            ans += s * g;
        }
        return ans;
    }
};