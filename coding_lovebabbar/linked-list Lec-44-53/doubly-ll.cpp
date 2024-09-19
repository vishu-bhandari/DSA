#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node(){

        int val=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory free for node with data "<<val<<endl;
    }
};
// traversing and printing the linked list
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// gives the length of the linked list
int getLength(Node *head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

// inserting at head
void insertAtHead(Node *&head, Node *&tail, int data)
{

    // empty list
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    else
    {
        Node *temp = new Node(data);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

// inserting at tail

void insertAtTail(Node *&tail, Node *&head, int data)
{
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        head = temp;
    }
    else
    {

        Node *temp = new Node(data);

        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

// insert at a position
void insertAtPosition(Node *&head, Node *&tail, int position, int data)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position)
    {
        temp = temp->next;
        cnt++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }

    // inserting the node
    Node *nodeToInsert = new Node(data);

    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteNode(int position, Node *&head)
{
    // deleting the start node

    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;

        delete temp;
    }
    else
    {

        // deleing any middle or last node
        Node *current = head;
        Node *previous = NULL;

        int cnt = 1;

        while (cnt < position)
        {
            previous = current;
            current = current->next;
            cnt++;
        }
       

        current->prev=NULL;
        previous->next=current->next;
        current->next=NULL;

        delete current;

        
    }
}

int main()
{

    // Node * node1=new Node(10);
    // Node* head=node1;
    // Node* tail=node1;

    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    cout << getLength(head) << endl;

    insertAtHead(head, tail, 11);
    print(head);
    insertAtHead(head, tail, 11);
    print(head);
    insertAtHead(head, tail, 11);
    print(head);

    insertAtTail(tail, head, 25);
    print(head);

    cout << getLength(head) << endl;
    insertAtPosition(head, tail, 1, 99);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    insertAtPosition(head, tail, 5, 100);
    print(head);

    cout<<getLength(head)<<endl;


    deleteNode(3,head);
     cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    print(head);



    return 0;
}