class Solution
{
public:
    int findSum(int A[], int N)
    {
        // code here.
        int m1 = INT_MAX;
        int m2 = INT_MIN;
        for (int i = 0; i < N; i++)
        {
            if (A[i] < m1)
            {
                m1 = A[i];
            }
            if (A[i] > m2)
            {
                m2 = A[i];
            }
        }
        return m1 + m2;
    }
};