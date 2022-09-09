class Solution
{
public:
    int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int count = 0;
        int i = 0, j = 0;
        int ans;
        while (i < n && j < m)
        {
            if (arr1[i] < arr2[j])
            {
                count++;
                ans = arr1[i];
                i++;
            }
            else
            {
                count++;
                ans = arr2[j];
                j++;
            }

            if (count == k)
            {
                return ans;
            }
        }
        while (i < n)
        {
            count++;
            ans = arr1[i];
            if (count == k)
            {
                return ans;
            }
            i++;
        }
        while (j < m)
        {
            count++;
            ans = arr2[j];
            if (count == k)
            {
                return ans;
            }
            j++;
        }
        return ans;
    }
};