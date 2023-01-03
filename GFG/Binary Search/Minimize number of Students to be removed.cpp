// Longest Common Subsequence
class Solution
{
public:
    int removeStudents(int arr[], int N)
    {
        // code here
        vector<int> vec;
        vec.push_back(arr[0]);
        for (int i = 1; i < N; i++)
        {
            if (vec.back() >= arr[i])
            {
                int temp = lower_bound(vec.begin(), vec.end(), arr[i]) - vec.begin();
                vec[temp] = arr[i];
            }
            else
            {
                vec.push_back(arr[i]);
            }
        }
        return N - vec.size();
    }
};