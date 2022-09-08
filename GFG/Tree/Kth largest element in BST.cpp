/*struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};
*/

// return the Kth largest element in the given BST rooted at 'root'
class Solution
{
public:
    int ans = 0;
    void solve(Node *root, int &k, int &n)
    {
        if (!root)
        {
            return;
        }

        solve(root->right, k, n);
        n++;
        if (k == n)
        {
            ans = root->data;
            return;
        }
        solve(root->left, k, n);
    }
    int kthLargest(Node *root, int K)
    {
        // Your code here
        int n = 0;
        solve(root, K, n);
        return ans;
    }
};