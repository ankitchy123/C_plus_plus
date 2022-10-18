int countLeaves(Node *root)
{
    // Your code here
    int ans = 0;
    if (!root)
    {
        return 0;
    }
    if (!root->left && !root->right)
    {
        ans++;
    }
    else
    {
        ans += countLeaves(root->left);
        ans += countLeaves(root->right);
    }
    return ans;
}