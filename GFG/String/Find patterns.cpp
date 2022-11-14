class Solution
{
public:
    int numberOfSubsequences(string S, string W)
    {
        // code here
        vector<bool> visited(S.size(), false);
        int ans = 0;
        for (int i = 0; i < S.size(); i++)
        {
            if (!visited[i] && S[i] == W[0])
            {
                visited[i] = true;
                int k = 1;
                if (k > W.size() - 1)
                {
                    ans++;
                    k = 0;
                }
                for (int j = i + 1; j < S.size() && k < W.size(); j++)
                {
                    if (!visited[j] && S[j] == W[k])
                    {
                        visited[j] = true;
                        k++;
                    }
                }

                if (k == W.size())
                {
                    ans++;
                    k = 0;
                }
            }
        }
        return ans;
    }
};