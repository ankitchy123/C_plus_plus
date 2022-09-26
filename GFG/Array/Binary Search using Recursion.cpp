#include <iostream>
using namespace std;

int search(int vec[], int i, int j, int num)
{
    if (j >= i)
    {
        int mid = (i + j) / 2;
        if (vec[mid] == num)
        {
            return mid;
        }
        else if (vec[mid] < num)
        {
            i = mid + 1;
            return search(vec, i, j, num);
        }
        else
        {
            j = mid - 1;
            return search(vec, i, j, num);
        }
    }
    return -1;
}
int main()
{
    int vec[] = {1, 4, 6, 9, 10, 23};
    int num = 9;
    int ans = search(vec, 0, 5, num);
    cout << ans;
    return 0;
}
