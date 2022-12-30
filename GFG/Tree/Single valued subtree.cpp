/* Tree Node
struct Node
{
    int data;
    Node* left;
    Node* right;
};*/

class Solution
{
    int ans = 0;
    bool solve(Node *root)
    {
        if (!root)
        {
            return true;
        }
        if (!root->left and !root->right)
        {
            ans++;
            return true;
        };
        bool left = solve(root->left);
        bool right = solve(root->right);
        int temp = root->data;
        int l = temp, r = temp;
        if (root->left)
        {
            l = root->left->data;
        }
        if (root->right)
        {
            r = root->right->data;
        }

        if ((left && right) && ((l == r) && (temp == r)))
        {
            ans++;
            return true;
        }
        return false;
    }

public:
    int singlevalued(Node *root)
    {
        // code here
        solve(root);
        return ans;
    }
};