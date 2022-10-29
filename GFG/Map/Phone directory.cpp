class Solution
{
public:
    vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        // code here
        unordered_map<string, set<string>> mp;
        for (int i = 0; i < n; i++)
        {
            string str = "";
            for (int j = 0; j < contact[i].size(); j++)
            {
                str += contact[i][j];
                mp[str].insert(contact[i]);
            }
        }
        vector<vector<string>> ans;
        string str = "";
        for (int i = 0; i < s.size(); i++)
        {
            str += s[i];
            if (mp.find(str) != mp.end())
            {
                ans.push_back({mp[str].begin(), mp[str].end()});
            }
            else
            {
                ans.push_back({"0"});
            }
        }
        return ans;
    }
};