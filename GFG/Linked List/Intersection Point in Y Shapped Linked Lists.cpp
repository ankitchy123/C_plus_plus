/* Linked List Node
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

// Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node *head1, Node *head2)
{
    // Your Code Here
    Node *curr1 = head1, *curr2 = head2;
    while (curr1 != curr2)
    {
        if (curr1)
        {
            curr1 = curr1->next;
        }
        else
        {
            curr1 = head2;
        }

        if (curr2)
        {
            curr2 = curr2->next;
        }
        else
        {
            curr2 = head1;
        }
    }

    return curr1->data;
}