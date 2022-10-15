class Solution
{
public:
    ListNode *moveToFront(ListNode *head)
    {
        if (!head || !head->next)
        {
            return head;
        }

        ListNode *temp = head;
        while (temp->next->next)
        {
            temp = temp->next;
        }

        ListNode *temp2 = temp->next;
        temp2->next = head;
        temp->next = NULL;

        return temp2;
    }
};