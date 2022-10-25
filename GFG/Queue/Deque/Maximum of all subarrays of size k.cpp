class Solution
{
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int *arr, int n, int k)
    {
        // your code here
        deque<int> dq;
        vector<int> vec;
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            while (!dq.empty() && arr[i] >= arr[dq.back()])
            {
                dq.pop_back();
            }
            dq.push_back(i);
            if (i - temp + 1 < k)
            {
                continue;
            }
            vec.push_back(arr[dq.front()]);

            if (temp == dq.front())
            {
                dq.pop_front();
            }
            temp++;
        }
        return vec;
    }
};