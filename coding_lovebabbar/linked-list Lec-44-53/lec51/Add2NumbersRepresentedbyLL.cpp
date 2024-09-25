#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(node *&head, int data)
{
    node *newNode = new node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node *reverse(node *head)
{
    node *curr = head;
    node *next = NULL;
    node *prev = NULL;

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

void insertAtTail(node *&head, node *&tail, int value)
{
    node *temp = new node(value);

    // empty list case
    if (head == NULL)
    {
        head = temp;
        tail = temp;
        return;
    }
    else
    {
        tail->next = temp;
        tail = temp;
    }
}

node *addAll(node *first, node *second)
{
    int carry = 0;

    node *ansHead = NULL;
    node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0)
    {
        int sum = carry;
        if (first != NULL)
        {
            sum += first->data;
            first = first->next;
        }
        if (second != NULL)
        {
            sum += second->data;
            second = second->next;
        }

        int digit = sum % 10;
        // create node and add in answer linked list
        insertAtTail(ansHead, ansTail, digit);

        carry = sum / 10;
    }

    return ansHead;
}

node *addTwo(node *first, node *second)
{
    // step1->reverse the input linked list
    first = reverse(first);
    second = reverse(second);

    // add 2 linked lists
    node *ans = addAll(first, second);

    // step 3
    ans = reverse(ans);

    return ans;
}

int main()
{
    node *node1 = new node(4);
    node *head1 = node1;
    node *node2 = new node(3);
    node *head2 = node2;

    insertNode(head1, 5);

    cout << "First List: ";
    print(head1);
    cout << endl;

    insertNode(head2, 4);
    insertNode(head2, 5);
    cout << "Second List: ";
    print(head2);
    cout << endl;

    node *answer = addTwo(head1, head2);
    cout << "Resultant List: ";
    print(answer);
    cout << endl;

    return 0;
}
