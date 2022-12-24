class Solution
{
public:
    long long int wineSelling(vector<int> &arr, int N)
    {
        // Code here.
        long long ans = 0;
        int i = 0, j = 0;
        while (i < N && j < N)
        {
            while (arr[i] <= 0)
            {
                i++;
            }
            while (arr[j] >= 0)
            {
                j++;
            }

            if (abs(arr[j]) > arr[i])
            {
                ans += arr[i] * abs(i - j);
                arr[j] += arr[i];
                i++;
            }
            else if (abs(arr[j]) < arr[i])
            {
                ans += abs(arr[j]) * abs(i - j);
                arr[i] += arr[j];
                j++;
            }
            else
            {
                ans += arr[i] * abs(i - j);
                arr[i] = 0;
                arr[j] = 0;
                i++;
                j++;
            }
        }
        return ans;
    }
};