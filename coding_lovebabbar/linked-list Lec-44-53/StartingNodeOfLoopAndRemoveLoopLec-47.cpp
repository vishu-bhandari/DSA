#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }
};

void insertNode(node *&tail, int d)
{
    node *newNode = new node(d);

    if (tail == NULL)
    {
        tail = newNode;
        newNode->next = tail;
    }
    else
    {
        newNode->next = tail->next;
        tail->next = newNode;
        tail = newNode;
    }
}

void print(node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    node *temp = tail->next;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != tail->next);
    cout << endl;
}

bool floydDetectLoop(node *head)
{
    if (head == NULL)
    {
        return false;
    }
    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
        {
            return true;
        }
    }
    return false;
}

node *getStartingNode(node *head)
{
    if (head == NULL)
        return NULL;

    node *slow = head;
    node *fast = head;

    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    if (slow != fast)
        return NULL;

    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow;
}

node *removeLoop(node *head)
{
    if( head == NULL)
        return NULL;

    node* startOfLoop = getStartingNode(head);
    
    if(startOfLoop == NULL)
        return head;
    
    node* temp = startOfLoop;

    while(temp -> next != startOfLoop) {
        temp = temp -> next;
    } 

    temp -> next = NULL;
    return head;
}
int main()
{
    node *tail = NULL;

    insertNode(tail, 10);
    insertNode(tail, 12);
    insertNode(tail, 15);
    insertNode(tail, 22);

    node *temp = tail;

    while (temp->next != tail->next)
    {
        temp = temp->next;
    }

    node *loopStart = tail->next->next;
    temp->next = loopStart;

    if (floydDetectLoop(tail->next))
    {
        cout << "Loop detected." << endl;
    }
    else
    {
        cout << "No loop detected." << endl;
    }

    node *loopNode = getStartingNode(tail->next);
    if (loopNode != NULL)
    {
        cout << "Loop starts at node with value: " << loopNode->data << endl;
    }

    print(tail);


    cout<<removeLoop(tail)<<endl;
    
  

    return 0;
}
