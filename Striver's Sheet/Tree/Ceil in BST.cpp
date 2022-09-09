int floorInBST(TreeNode<int> *root, int X)
{
    // Write your code here.
    int ans = -1;
    while (root)
    {
        if (root->val == X)
        {
            ans = root->val;
            return ans;
        }
        else if (root->val > X)
        {
            ans = root->val;
            root = root->left;
        }
        else
        {
            root = root->right;
        }
    }
    return ans;
}