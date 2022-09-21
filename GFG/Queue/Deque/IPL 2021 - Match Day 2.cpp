class Solution
{
public:
    vector<int> max_of_subarrays(vector<int> arr, int n, int k)
    {
        // your code here
        deque<int> q;
        vector<int> ans;

        for (int i = 0; i < k; i++)
        {
            while (!q.empty() && q.back() < arr[i])
            {
                q.pop_back();
            }
            q.push_back(arr[i]);
        }
        ans.push_back(q.front());

        for (int i = k; i < n; i++)
        {
            // int temp = ;

            if (arr[abs(i - k)] == q.front())
            {
                q.pop_front();
            }

            while (!q.empty() && q.back() < arr[i])
            {
                q.pop_back();
            }
            q.push_back(arr[i]);

            ans.push_back(q.front());
        }
        return ans;
    }
};