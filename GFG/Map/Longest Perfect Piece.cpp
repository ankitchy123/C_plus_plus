class Solution
{
public:
    int longestPerfectPiece(int arr[], int N)
    {
        // code here
        map<int, int> mp;
        int ans = 1;
        int i = 0, j = 0;
        while (i < N)
        {
            mp[arr[i]]++;
            while ((--mp.end())->first - mp.begin()->first > 1)
            {
                mp[arr[j]]--;

                if (mp[arr[j]] == 0)
                {
                    mp.erase(arr[j]);
                }

                j++;
            }
            ans = max(ans, i - j + 1);
            i++;
        }
        return ans;
    }
};