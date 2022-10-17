class Solution
{

public:
    vector<int>
    downwardDigonal(int N, vector<vector<int>> A)
    {
        // Your code goes here
        vector<int> ans;
        for (int i = 0; i < N - 1; i++)
        {
            int k = i;
            for (int j = 0; j < N && k >= 0; j++)
            {
                ans.push_back(A[j][k--]);
            }
        }

        for (int i = 0; i < N; i++)
        {
            int k = i;
            for (int j = N - 1; j >= 0 && k < N; j--)
            {
                ans.push_back(A[k++][j]);
            }
        }
        return ans;
    }
};