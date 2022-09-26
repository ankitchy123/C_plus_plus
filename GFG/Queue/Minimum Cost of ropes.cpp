class Solution
{
public:
    // Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n)
    {
        // Your code here
        priority_queue<long long> q;
        long long ans = 0;
        for (long long i = 0; i < n; i++)
        {
            q.push(-arr[i]);
        }

        for (long long i = 0; i < n - 1; i++)
        {
            long long temp = q.top();
            q.pop();
            long long temp2 = q.top();
            q.pop();

            q.push(temp + temp2);
            ans += -(temp + temp2);
        }
        return ans;
    }
};