class Solution
{
public:
    int ElementsLesserThanOrEqual(vector<vector<int>> &matrix, int R, int C, int curr)
    {
        int count = 0;
        for (int i = 0; i < R; i++)
        {
            int s = 0;
            int e = C - 1;
            int currCount = 0;
            while (s <= e)
            {
                int mid = s + (e - s) / 2;
                if (matrix[i][mid] <= curr)
                {
                    currCount = max(currCount, mid + 1);
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
            count += currCount;
        }
        return count;
    }

    int median(vector<vector<int>> &matrix, int R, int C)
    {
        // code here
        int s = 1, e = 2000;
        int ans = 2000;
        while (s <= e)
        {
            int mid = s + (e - s) / 2;
            int curr = ElementsLesserThanOrEqual(matrix, R, C, mid);
            if (curr < (R * C + 1) / 2)
            {
                s = mid + 1;
            }
            else
            {
                ans = min(ans, mid);
                e = mid - 1;
            }
        }
        return ans;
    }
};