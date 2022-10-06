class Solution
{
public:
    void flatten(Node *root)
    {
        if (!root)
        {
            return;
        }
        if (root->left)
        {
            flatten(root->left);
            Node *temp = root->right;
            root->right = root->left;
            root->left = NULL;

            Node *temp2 = root->right;
            while (temp2->right != NULL)
            {
                temp2 = temp2->right;
            }

            temp2->right = temp;
        }
        flatten(root->right);
    }
};