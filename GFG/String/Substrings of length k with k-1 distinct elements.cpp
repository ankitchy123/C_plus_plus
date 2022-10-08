class Solution
{
public:
    int countOfSubstrings(string s, int k)
    {
        // code here
        unordered_map<char, int> mp;
        int i = 0, j = 0, count = 0;
        while (i < s.size())
        {
            mp[s[i]]++;
            if (i - j + 1 == k)
            {
                if (mp.size() == (k - 1))
                {
                    count++;
                }
                mp[s[j]]--;
                if (mp[s[j]] == 0)
                {
                    mp.erase(s[j]);
                }
                j++;
            }
            i++;
        }
        return count;
    }
};