class Solution
{
public:
    int maxGroupSize(int arr[], int N, int K)
    {
        // code here
        vector<int> vec(K, 0);
        for (int i = 0; i < N; i++)
        {
            vec[arr[i] % K]++;
        }
        int ans = 0, i = 1, j = K - 1;
        while (i <= j)
        {
            if (i == j && vec[i] > 0)
            {
                ans += 1;
                break;
            }
            ans += max(vec[i], vec[j]);
            i++;
            j--;
        }
        if (vec[0] > 0)
        {
            ans += 1;
        }
        return ans;
    }
};