// User function template for C++

/* A binary tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

class Solution
{
public:
    int solve(Node *node)
    {
        if (!node)
        {
            return 0;
        }
        if (!node->left && !node->right)
        {
            int temp = node->data;
            node->data = 0;
            return temp;
        }

        int l = solve(node->left), r = solve(node->right);
        int val = node->data;
        node->data = l + r;
        return node->data + val;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        solve(node);
    }
};