class Solution
{
public:
    // Function to find largest subtree sum.
    int solve(Node *root, int &ans)
    {
        if (!root)
        {
            return INT_MIN;
        }

        int leftSum = solve(root->left, ans);
        int rightSum = solve(root->right, ans);
        int curr = 0;
        if (leftSum != INT_MIN)
        {
            ans = max(ans, leftSum);
            curr = leftSum;
        }
        if (rightSum != INT_MIN)
        {
            ans = max(ans, rightSum);
            curr += rightSum;
        }
        return root->data + curr;
    }
    int findLargestSubtreeSum(Node *root)
    {
        // Write your code here
        int ans = INT_MIN;
        ans = max(ans, solve(root, ans));
        return ans;
    }
};