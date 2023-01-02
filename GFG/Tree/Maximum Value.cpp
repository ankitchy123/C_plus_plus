/* Tree node structure  used in the program

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
}; */

class Solution
{
public:
    vector<int> maximumValue(Node *node)
    {
        // code here
        queue<Node *> q;
        vector<int> ans;
        q.push(node);
        q.push(NULL);
        int temp = INT_MIN;
        while (!q.empty())
        {
            Node *curr = q.front();
            q.pop();
            if (curr)
            {
                temp = max(temp, curr->data);
                if (curr->left)
                {
                    q.push(curr->left);
                }
                if (curr->right)
                {
                    q.push(curr->right);
                }
            }
            else if (!q.empty())
            {
                ans.push_back(temp);
                q.push(NULL);
                temp = INT_MIN;
            }
        }
        ans.push_back(temp);
        return ans;
    }
};