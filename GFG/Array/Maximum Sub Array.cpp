class Solution
{
public:
    vector<int> findSubarray(int a[], int n)
    {
        // code here
        vector<int> vec;
        int x = -1, y = -1, s = 0;
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] < 0)
            {
                x = i + 1;
                sum = 0;
            }
            else
            {
                sum += a[i];
            }
            if (sum >= ans)
            {
                s = max(s, x);
                ans = sum;
                y = i;
            }
        }

        for (int i = s; i <= y; i++)
        {
            vec.push_back(a[i]);
        }
        if (vec.size() == 0)
        {
            return {-1};
        }

        return vec;
    }
};