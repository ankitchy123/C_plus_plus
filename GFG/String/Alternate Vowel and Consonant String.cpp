class Solution
{
public:
    string rearrange(string S, int N)
    {
        vector<int> vo(26, 0), co(26, 0);

        int vcount = 0, ccount = 0;
        for (int i = 0; i < N; i++)
        {
            char ch = S[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            {
                vcount++;
                vo[ch - 'a']++;
            }
            else
            {
                co[ch - 'a']++;
            }
        }
        ccount = N - vcount;

        string ans = "";
        if (vcount - ccount > 1 || ccount - vcount > 1)
        {
            return "-1";
        }
        int i = 0, j = 0, k = 0;
        bool flag = true;
        if (vcount < ccount)
        {
            flag = false;
        }
        while (i < N)
        {
            if (j < 26 && flag == 1)
            {
                while (vo[j] < 1 && j < 26)
                {
                    j++;
                }
                ans += (char)('a' + j);
                vo[j]--;
                flag = 0;
            }
            else if (k < 26 && flag == 0)
            {
                while (co[k] < 1 && k < 26)
                {
                    k++;
                }
                ans += (char)('a' + k);
                co[k]--;
                flag = 1;
            }
            i++;
        }
        return ans;
    }
};