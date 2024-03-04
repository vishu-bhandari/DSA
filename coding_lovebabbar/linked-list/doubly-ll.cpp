#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *prev;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->prev = NULL;
        this->next = NULL;
    }
    ~node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<" memory free for node with data "<<value<<endl;
    }
};
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

// gives length of the linked list
int getLength(node *head)
{
    int len = 0;
    node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}
void insertAthead(node *&tail, node *&head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        head = temp;
        tail = temp;
    }
    else
    {
        node *temp = new node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insertAttail(node *&tail, node *&head, int d)
{
    if (head == NULL)
    {
        node *temp = new node(d);
        tail = temp;
        head = temp;
    }
    else
    {
        node *temp = new node(d);
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}
void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAthead(tail, head, d);
        return;
    }
    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at last positon
    if (temp->next == NULL)
    {
        insertAttail(tail, head, d);
        return;
    }

    // creating a node for d
    node *nodetoinsert = new node(d);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
void deleteNode(int position, node *&head)
{
    // deleting start node
    if (position == 1)
    {
        node *temp = head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        // deleting any middle node or last node
        node *curr = head;
        node *previous = NULL;

        int count = 1;
        while (count < position)
        {
            previous = curr;
            curr = curr->next;
            count++;
        }
        curr->prev=NULL;
        previous->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main()
{

    // node *node1 = new node(10);
    node *head = NULL;
    node *tail = NULL;
    print(head);

    cout << getLength(head) << endl;

    insertAthead(tail, head, 11);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    insertAthead(tail, head, 13);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    insertAthead(tail, head, 18);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    insertAttail(tail, head, 25);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    insertAtPosition(tail, head, 2, 100);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    insertAtPosition(tail, head, 1, 101);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    insertAtPosition(tail, head, 7, 102);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(1,head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    deleteNode(6,head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;
    deleteNode(7,head);
    print(head);
    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    return 0;
}