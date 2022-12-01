class Solution
{
public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    // Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {
        // Your code here
        vector<long long int> v;
        for (int i = 0; i <= n / 2; i++)
        {
            v.push_back(arr[n - i - 1]);
            v.push_back(arr[i]);
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = v[i];
        }
    }
};