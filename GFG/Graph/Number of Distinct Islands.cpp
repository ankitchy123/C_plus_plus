class Solution
{
public:
    void solve(vector<vector<int>> &grid, int i, int j, string &s)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0)
        {
            return;
        }

        grid[i][j] = 0;
        s += 'u';
        solve(grid, i - 1, j, s);
        s += 'd';
        solve(grid, i + 1, j, s);
        s += 'l';
        solve(grid, i, j - 1, s);
        s += 'r';
        solve(grid, i, j + 1, s);
    }

    int countDistinctIslands(vector<vector<int>> &grid)
    {
        set<string> st;

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1)
                {
                    string s = "";
                    solve(grid, i, j, s);
                    st.insert(s);
                }
            }
        }
        return st.size();
    }
};