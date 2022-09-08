class Solution
{
public:
    string digitsNum(int N)
    {
        // Code here.
        int x = N / 9;
        string ans = "";
        if (N % 9 != 0)
        {
            ans += to_string(N % 9);
        }
        while (x--)
        {
            ans += "9";
        }

        while (N--)
        {
            ans += "0";
        }

        return ans;
    }
};