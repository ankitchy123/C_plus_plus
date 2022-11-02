class Solution
{
public:
    int largestArea(int n, int m, int k, vector<vector<int>> &enemy)
    {
        //  code here
        if (k == 0)
        {
            return n * m;
        }
        vector<int> row, col;
        row.push_back(0);
        col.push_back(0);
        for (int i = 0; i < k; i++)
        {
            row.push_back(enemy[i][0]);
            col.push_back(enemy[i][1]);
        }

        row.push_back(n + 1);
        col.push_back(m + 1);
        sort(row.begin(), row.end());
        sort(col.begin(), col.end());

        int max_row = 0;
        int max_col = 0;
        for (int i = 1; i < row.size(); i++)
        {
            max_row = max(max_row, row[i] - row[i - 1] - 1);
        }

        for (int i = 1; i < col.size(); i++)
        {
            max_col = max(max_col, col[i] - col[i - 1] - 1);
        }

        return max_row * max_col;
    }
};