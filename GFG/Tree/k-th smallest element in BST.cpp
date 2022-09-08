/*Complete the function below

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution
{
public:
    int ans = -1;
    void solve(Node *root, int k, int &n)
    {
        if (!root)
        {
            return;
        }

        solve(root->left, k, n);
        n++;
        if (k == n)
        {
            ans = root->data;
            return;
        }
        solve(root->right, k, n);
    }

    // Return the Kth smallest element in the given BST
    int KthSmallestElement(Node *root, int K)
    {
        // add code here.
        int n = 0;
        solve(root, K, n);
        return ans;
    }
};