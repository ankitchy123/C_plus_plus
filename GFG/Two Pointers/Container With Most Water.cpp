long long maxArea(long long A[], int len)
{
    // Your code goes here
    int i = 0, j = len - 1;
    int ans = INT_MIN;
    while (i <= j)
    {
        int curr = min(A[i], A[j]) * (j - i);
        ans = max(ans, curr);
        if (A[i] < A[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }
    return ans;
}