string buildLowestNumber(string num, int k)
{
    // code here
    stack<char> st;
    for (int i = 0; i < num.size(); i++)
    {
        while (!st.empty() && st.top() - '0' > num[i] - '0' && k > 0)
        {
            st.pop();
            k--;
        }
        st.push(num[i]);
    }

    while (k > 0 && !st.empty())
    {
        k--;
        st.pop();
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top();
        st.pop();
    }

    while (ans.back() == '0')
    {
        ans.pop_back();
    }
    if (ans.empty())
    {
        return "0";
    }
    reverse(ans.begin(), ans.end());
    return ans;
}