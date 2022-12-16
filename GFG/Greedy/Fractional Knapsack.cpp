/*
struct Item{
    int value;
    int weight;
};
*/
class Solution
{
public:
    static bool comp(Item i1, Item i2)
    {
        double a = (double)i1.value / i1.weight;
        double b = (double)i2.value / i2.weight;
        return a > b;
    }
    // Function to get the maximum total value in the knapsack.
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        sort(arr, arr + n, comp);

        double ans = 0;
        int i = 0;

        while (W && i < n)
        {
            if (arr[i].weight <= W)
            {
                ans += arr[i].value;
                W -= arr[i].weight;
            }
            else
            {
                ans += ((double)arr[i].value / arr[i].weight) * W;
                break;
            }
            i++;
        }
        return ans;
    }
};
