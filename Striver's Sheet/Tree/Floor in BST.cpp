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
            root = root->left;
        }
        else
        {
            ans = root->val;
            root = root->right;
        }
    }
    return ans;
}