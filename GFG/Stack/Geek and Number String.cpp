class Solution
{
public:
    int minLength(string s, int n)
    {
        // code here
        stack<int> st;
        for (int i = 0; i < n; i++)
        {
            int temp = s[i] - '0';
            if (!st.empty() && ((temp == 9 && st.top() == 0) || (temp == 0 && st.top() == 9)))
            {
                st.pop();
            }
            else if (!st.empty() && ((temp % 2 == 0 && st.top() == temp - 1) || (temp % 2 == 1 && st.top() == temp + 1)))
            {
                st.pop();
            }
            else
            {
                st.push(temp);
            }
        }
        return st.size();
    }
};