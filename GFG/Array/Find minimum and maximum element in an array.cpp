pair<long long, long long> getMinMax(long long a[], int n)
{
    long long m1 = INT_MAX, m2 = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > m2)
        {
            m2 = a[i];
        }
        if (a[i] < m1)
        {
            m1 = a[i];
        }
    }

    return make_pair(m1, m2);
}