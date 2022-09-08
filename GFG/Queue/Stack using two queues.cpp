/* The structure of the class is
class QueueStack{
private:
    queue<int> q1;
    queue<int> q2;
public:
    void push(int);
    int pop();
};
 */

void QueueStack ::push(int x)
{
    // Your Code
    q1.push(x);
    int count = q1.size() - 1;
    while (count--)
    {
        q1.push(q1.front());
        q1.pop();
    }
}

// Function to pop an element from stack using two queues.
int QueueStack ::pop()
{
    // Your Code
    if (q1.size() > 0)
    {
        int ele = q1.front();
        q1.pop();
        return ele;
    }
    else
    {
        return -1;
    }
}