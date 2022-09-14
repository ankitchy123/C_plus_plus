class Solution
{
public:
    int minSubset(vector<int> &Arr, int N)
    {
        sort(Arr.begin(), Arr.end());
        long long sum = 0, ans = 0, curr = 0;
        for (int i = 0; i < Arr.size(); i++)
        {
            sum += Arr[i];
        }

        // 2 3 7 17
        for (int i = Arr.size() - 1; i >= 0; i--)
        {
            ans++;
            curr += Arr[i];
            sum -= Arr[i];
            if (curr > sum)
            {
                return ans;
            }
        }
        return ans;
    }
};