/*Node structure used in the program

    struct Node
{
    int data;
    struct Node *next;
    struct Node *bottom;

    Node(int x)
    {
        data = x;
        next = NULL;
        bottom = NULL;
    }
};
*/

class Solution
{
public:
    Node *merge(Node *a, Node *b)
    {
        Node *ans = new Node(-1);
        Node *curr = ans;

        while (a && b)
        {
            if (a->data <= b->data)
            {
                curr->bottom = a;
                curr = curr->bottom;
                a = a->bottom;
            }
            else
            {
                curr->bottom = b;
                curr = curr->bottom;
                b = b->bottom;
            }
        }

        if (a)
        {
            curr->bottom = a;
        }
        if (b)
        {
            curr->bottom = b;
        }

        return ans->bottom;
    }
    Node *flatten(Node *root)
    {
        if (!root->next)
        {
            return root;
        }
        Node *ans = merge(root, flatten(root->next));
        return ans;
    }
};