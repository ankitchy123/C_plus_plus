/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

// Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
    // Your code here
    Node *fast = head;
    int count = 0;
    while (count < n && fast)
    {
        fast = fast->next;
        count++;
    }
    if (count < n)
    {
        return -1;
    }
    while (fast)
    {
        fast = fast->next;
        head = head->next;
    }
    return head->data;
}