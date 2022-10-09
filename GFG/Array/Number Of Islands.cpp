class Solution
{
public:
    void count(vector<vector<int>> &vec, int i, int j)
    {
        if (i < 0 || j < 0 || i >= vec.size() || j >= vec[i].size() || vec[i][j] == 0)
        {
            return;
        }

        vec[i][j] = 0;
        count(vec, i + 1, j);
        count(vec, i - 1, j);
        count(vec, i, j + 1);
        count(vec, i, j - 1);
    }
    int solve(vector<vector<int>> vec)
    {
        int ans = 0;
        for (int i = 0; i < vec.size(); i++)
        {
            for (int j = 0; j < vec[i].size(); j++)
            {
                if (vec[i][j] == 1)
                {
                    ans++;
                    count(vec, i, j);
                }
            }
        }
        return ans;
    }
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators)
    {
        // code here
        vector<vector<int>> vec(n, vector<int>(m, 0));
        vector<int> ans;
        for (int i = 0; i < operators.size(); i++)
        {
            vec[operators[i][0]][operators[i][1]] = 1;
            ans.push_back(solve(vec));
        }
        return ans;
    }
};
