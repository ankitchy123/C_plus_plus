class Solution
{
public:
    // #define ll long long

    ll countSubarray(int arr[], int n, int k)
    {
        // code here
        ll total = (ll)n * (n + 1) / 2;
        ll c = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] <= k)
            {
                c++;
            }
            else
            {
                total -= (c * (c + 1)) / 2;
                c = 0;
            }
        }
        total -= (c * (c + 1)) / 2;
        return total;
    }
};