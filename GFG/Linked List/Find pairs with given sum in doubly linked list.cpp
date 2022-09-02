class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        // code here
        vector<pair<int, int>> ans;
        Node *temp = head;
        while (temp->next)
        {
            temp = temp->next;
        }

        while (head->data < temp->data)
        {
            if (temp->data + head->data == target)
            {
                ans.push_back({head->data, temp->data});
                temp = temp->prev;
                head = head->next;
            }
            else if (temp->data + head->data < target)
            {
                head = head->next;
            }
            else
            {
                temp = temp->prev;
            }
        }
        return ans;
    }
};