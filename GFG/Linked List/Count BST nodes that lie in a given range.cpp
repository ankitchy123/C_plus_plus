class Solution
{
public:
    int getCount(Node *root, int l, int h)
    {
        // your code goes here
        if (!root)
        {
            return 0;
        }
        int ans = 0;
        if (root->data >= l && root->data <= h)
        {
            ans++;
        }

        if (root->data > l)
        {
            ans += getCount(root->left, l, h);
        }
        if (root->data < h)
        {
            ans += getCount(root->right, l, h);
        }
        return ans;
    }
};