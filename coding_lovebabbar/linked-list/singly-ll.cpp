#include <iostream>
using namespace std;

class node
{
public:
    int data;
    // pointer of node type
    node *next;

    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    // destructor
    ~node()
    {
        int value = this->data;
        // memory free
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for node with data " << value << endl;
    }
};

void insertAtHead(node *&head, int d)
{
    // new node create
    node *temp = new node(d);
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int d)
{
    // new node create
    node *temp = new node(d);
    tail->next = temp;
    tail = temp;
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

void insertAtPosition(node *&tail, node *&head, int position, int d)
{
    // insert at start
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    node *temp = head;
    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // inserting at last position
    if (temp->next == NULL)
    {
        insertAtTail(tail, d);
        return;
    }

    // creating a node for d
    node *nodeToInsert = new node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, node *&head)
{
    // deleting start node
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        // memory free start node
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
        previous->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

bool iscircularList(node* head){
    //empty list 
    if(head==NULL){
        return true;
    }
    node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }else{
        return false;
    }
}

int main()
{
    // create a new node
    node *node1 = new node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node1
    node *head = node1;
    node *tail = node1;
    print(head);

    insertAtTail(tail, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    insertAtPosition(tail, head, 4, 22);
    print(head);

    cout << "head " << head->data << endl;
    cout << "tail " << tail->data << endl;

    deleteNode(1, head);
    print(head);

    if(iscircularList(head)){
        cout<<"linked list is circular in nature ";
    }else{
        cout<<"linked list is not circular in nature";
    }


    return 0;
}