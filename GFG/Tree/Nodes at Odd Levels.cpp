/*
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;

    Node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
class Solution
{
public:
    vector<Node *> nodesAtOddLevels(Node *root)
    {
        // code here
        queue<Node *> q;
        q.push(root);
        q.push(NULL);
        vector<Node *> ans;
        bool flag = true;
        while (!q.empty())
        {
            Node *temp = q.front();
            q.pop();
            if (temp)
            {
                if (flag)
                {
                    ans.push_back(temp);
                }
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
            else if (!q.empty())
            {
                flag = !flag;
                q.push(NULL);
            }
        }
        return ans;
    }
};