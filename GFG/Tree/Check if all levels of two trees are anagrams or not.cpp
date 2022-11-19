class Solution
{
public:
    bool areAnagrams(Node *root1, Node *root2)
    {
        queue<Node *> q1, q2;
        q1.push(root1);
        q2.push(root2);

        while (!q1.empty() && !q2.empty())
        {
            int n1 = q1.size(), n2 = q2.size();
            if (n1 != n2)
                return false;
            map<int, int> mp;
            while (n1--)
            {
                Node *temp = q1.front();
                q1.pop();
                mp[temp->data]++;
                if (temp->left)
                {
                    q1.push(temp->left);
                }
                if (temp->right)
                {
                    q1.push(temp->right);
                }

                temp = q2.front();
                q2.pop();
                mp[temp->data]--;
                if (temp->left)
                {
                    q2.push(temp->left);
                }
                if (temp->right)
                {
                    q2.push(temp->right);
                }
            }

            for (auto i : mp)
            {
                if (i.second != 0)
                {
                    return false;
                }
            }
            return true;
        }
    }
};