#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    // destructor
    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free of data " << value << endl;
    }
};

void insertNode(Node *&tail, int element, int data)
{
    // asuming that the element is present in the list

    // empty list
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming the element is present in the list

        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found -> curr is representing the element

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;
    if (tail == NULL)
    {
        cout << "list is empty" << endl;
        return;
    }
    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << "List is empty , kya deleye krna hia" << endl;
        return;
    }

    else
    {
        // non empty

        // assuming tha the value is present in the linked list

        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;

        // one node linked list
        if (curr == prev)
        {
            tail = NULL;
        }

        //>=2 node linked list
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;

        delete curr;
    }
}

int main()
{

    Node *tail = NULL;

    // empty list mai insert kr re hai
    insertNode(tail, 5, 3);
    print(tail);
    insertNode(tail, 3, 5);
    print(tail);
    insertNode(tail, 5, 7);
    print(tail);
    insertNode(tail, 7, 9);
    print(tail);
    insertNode(tail, 5, 6);
    print(tail);
    insertNode(tail, 3, 4);
    print(tail);
    insertNode(tail, 7, 8);
    print(tail);

    deleteNode(tail, 3);
    print(tail);

    return 0;
}