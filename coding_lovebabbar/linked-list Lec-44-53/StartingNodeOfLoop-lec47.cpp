#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
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
        // Empty list
        tail = newNode;
        newNode->next = tail; // Circular link
    }
    else
    {
        // Non-empty list
        newNode->next = tail->next; // Insert after tail
        tail->next = newNode;
        tail = newNode; // Update tail
    }
}

void print(node *tail)
{
    if (tail == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }

    node *temp = tail->next; // Start from the head (tail->next)

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
            return true; // Loop detected
        }
    }
    return false; // No loop
}

node *getStartingNode(node *head)
{
    if (head == NULL)
        return NULL;

    node *slow = head;
    node *fast = head;

    // Detect loop using Floyd's algorithm
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (slow == fast)
            break;
    }

    // No loop detected
    if (slow != fast)
        return NULL;

    // Find the start of the loop
    slow = head;
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }

    return slow; // Start of the loop
}

void removeLoop(node *head)
{
    if (head == NULL)
        return;

    node *startOfLoop = getStartingNode(head);
    if (startOfLoop == NULL)
        return; // No loop

    node *temp = startOfLoop;

    // Traverse till the last node in the loop
    while (temp->next != startOfLoop)
    {
        temp = temp->next;
    }

    // Break the loop
    temp->next = NULL;
}

int main()
{
    node *tail = NULL;

    // Inserting values: 10 -> 12 -> 15 -> 22
    insertNode(tail, 10);
    insertNode(tail, 12);
    insertNode(tail, 15);
    insertNode(tail, 22);

    // Creating the loop manually: make 22 point to 12
    node *temp = tail;

    // Move to the node with value 22
    while (temp->next != tail->next) // tail->next is the head (node with value 10)
    {
        temp = temp->next;
    }

    // Move to node with value 12
    node *loopStart = tail->next->next; // This points to node with value 12
    temp->next = loopStart; // Create loop from 22 to 12

    // Print the list (should loop infinitely if not checked)
    // print(tail); // Comment this out as it will cause infinite loop

    // Detect loop
    if (floydDetectLoop(tail->next))
    {
        cout << "Loop detected." << endl;
    }
    else
    {
        cout << "No loop detected." << endl;
    }

    // Find and print the start of the loop
    node *loopNode = getStartingNode(tail->next);
    if (loopNode != NULL)
    {
        cout << "Loop starts at node with value: " << loopNode->data << endl;
    }

    // Remove the loop
    removeLoop(tail->next);

    // Print the list after removing the loop
    print(tail);

    return 0;
}
