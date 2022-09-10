class Solution
{
public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<vector<int>> vec;
        for (int i = 0; i < n; i++)
        {
            vec.push_back({start[i], end[i]});
        }

        sort(vec.begin(), vec.end(), [&](vector<int> &a, vector<int> &b)
             { return a[1] < b[1]; });

        int ans = 1;
        int temp = vec[0][1];
        for (int i = 1; i < n; i++)
        {
            if (vec[i][0] > temp)
            {
                ans++;
                temp = vec[i][1];
            }
        }
        return ans;
    }
};