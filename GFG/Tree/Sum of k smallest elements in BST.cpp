// User function Template for C++

/*
struct Node {
    int data;
    Node* right;
    Node* left;

    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
*/

// Function to find ceil of a given input in BST. If input is more
// than the max key in BST, return -1
void solve(Node *root, int &k, int &ans)
{
    if (!root)
    {
        return;
    }
    solve(root->left, k, ans);
    k--;
    if (k < 0)
    {
        return;
    }
    ans += root->data;
    solve(root->right, k, ans);
}
int sum(Node *root, int k)
{
    // Your code here
    int ans = 0;
    solve(root, k, ans);
    return ans;
}