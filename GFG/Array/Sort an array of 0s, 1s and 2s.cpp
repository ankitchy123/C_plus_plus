class Solution
{
public:
    void sort012(int a[], int n)
    {
        // code here
        int vec[3] = {0};
        for (int i = 0; i < n; i++)
        {
            vec[a[i]]++;
        }

        int j = 0;
        for (int i = 0; i < 3; i++)
        {
            int temp = vec[i];
            while (temp--)
            {
                a[j] = i;
                j++;
            }
        }
    }
};