class Solution
{
public:
    int minimumCostOfBreaking(vector<int> X, vector<int> Y, int M, int N)
    {
        // Write your code here
        sort(X.begin(), X.end());
        sort(Y.begin(), Y.end());
        int ans = 0;
        int v = 1, h = 1;
        int i = X.size() - 1, j = Y.size() - 1;
        while (i >= 0 && j >= 0)
        {
            if (X[i] > Y[j])
            {
                ans += X[i] * v;
                i--;
                h++;
            }
            else
            {
                ans += Y[j] * h;
                v++;
                j--;
            }
        }
        while (i >= 0)
        {
            ans += X[i] * v;
            i--;
            h++;
        }
        while (j >= 0)
        {
            ans += Y[j] * h;
            j--;
            v++;
        }

        return ans;
    }
};