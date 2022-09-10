class Solution
{
public:
    vector<int> minPartition(int N)
    {
        // code here
        vector<int> vec = {1, 2, 5, 10, 20, 50, 100, 200, 500, 2000};
        vector<int> ans;
        for (int i = vec.size() - 1; i >= 0; i--)
        {
            if (N == 0)
            {
                break;
            }
            int temp = N / vec[i];
            N %= vec[i];
            while (temp--)
            {
                ans.push_back(vec[i]);
            }
        }
        return ans;
    }
};