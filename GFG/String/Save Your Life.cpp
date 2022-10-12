class Solution
{
public:
    string maxSum(string w, char x[], int b[], int n)
    {
        // code here
        map<char, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[x[i]] = b[i];
        }

        string ans = "", temp = "";
        int sum = INT_MIN, curr = 0;
        for (int i = 0; i < w.size(); i++)
        {
            if (mp.find(w[i]) != mp.end())
            {
                curr += mp[w[i]];
            }
            else
            {
                curr += w[i];
            }

            temp += w[i];

            if (curr > sum)
            {
                ans = temp;
                sum = curr;
            }
            if (curr < 0)
            {
                temp = "";
                curr = 0;
            }
        }

        return ans;
    }
};