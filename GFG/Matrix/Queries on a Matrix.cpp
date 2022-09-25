class Solution
{
public:
    vector<vector<int>> solveQueries(int n, vector<vector<int>> Queries)
    {
        // Code here
        vector<vector<int>> ans(n, vector<int>(n, 0));
        int a, b, c, d;
        for (int i = 0; i < Queries.size(); i++)
        {
            a = Queries[i][0];
            b = Queries[i][1];
            c = Queries[i][2];
            d = Queries[i][3];

            for (int j = a; j <= c; j++)
            {
                for (int k = b; k <= d; k++)
                {
                    ans[j][k] += 1;
                }
            }
        }
        return ans;
    }
};