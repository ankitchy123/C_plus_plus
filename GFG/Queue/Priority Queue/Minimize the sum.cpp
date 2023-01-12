class Solution
{
public:
    int minimizeSum(int N, vector<int> arr)
    {
        // code here
        priority_queue<int, vector<int>, greater<int>> pq;
        for (int i = 0; i < N; i++)
        {
            pq.push(arr[i]);
        }
        int ans = 0;
        while (pq.size() != 1)
        {
            int temp1 = pq.top();
            pq.pop();
            int temp2 = pq.top();
            pq.pop();
            ans += temp1 + temp2;
            pq.push(temp1 + temp2);
        }
        return ans;
    }
};