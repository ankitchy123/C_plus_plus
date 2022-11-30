/*
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/

class Solution
{
public:
    void reorderList(Node *head)
    {
        // Your code here
        int n = 0;
        Node *itr = head;
        while (itr)
        {
            n++;
            itr = itr->next;
        }

        Node *prev;
        Node *curr;
        itr = head;

        for (int i = 0; i <= n / 2; i++)
        {
            if (i == n / 2)
            {
                prev = itr;
            }
            itr = itr->next;
        }

        curr = prev->next;
        prev->next = nullptr;
        Node *temp, *i_next, *j_next;
        while (curr)
        {
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        Node *i = head;
        Node *j = prev;
        while (true)
        {
            i_next = i->next;
            j_next = j->next;
            if (i == j || i_next == j)
            {
                break;
            }

            i->next = j;
            j->next = i_next;

            i = i_next;
            j = j_next;
        }
    }
};