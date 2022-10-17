class Solution
{
public:
    vector<int> findLeastGreater(vector<int> &arr, int n)
    {
        set<int> st;
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--)
        {
            st.insert(arr[i]);
            auto it = st.upper_bound(arr[i]);
            if (it == st.end())
            {
                ans[i] = -1;
            }
            else
            {
                ans[i] = *it;
            }
        }
        return ans;
    }
};