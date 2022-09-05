class Solution
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        set<int> st;
        int i = 0, j = 0;
        while (i < n && j < m)
        {
            st.insert(a[i]);
            st.insert(b[j]);
            i++;
            j++;
        }
        while (i < n)
        {
            st.insert(a[i]);
            i++;
        }
        while (j < m)
        {
            st.insert(b[j]);
            j++;
        }

        return st.size();
    }
};