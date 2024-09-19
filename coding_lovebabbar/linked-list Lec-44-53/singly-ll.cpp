#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;


    //constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    //destructor
    ~Node(){
        int value=this->data;

        //memory free 

        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"memory is free for node with data "<<value<<endl;
    }
};

void InsertAtHead(Node *&head, int d)
{

    // new node creation
    Node *temp = new Node(d);

    temp->next = head;
    head = temp;
}

void InserAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void InsertAtPosition(Node *&tail, Node *&head, int position, int d)
{

    Node *temp = head;

    // insert at start
    if (position == 1)
    {
        InsertAtHead(head, d);
        return;
    }

    int count = 1;
    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }
    // inserting at last position
    if (temp->next == NULL)
    {
        InserAtTail(tail, d);
        return;
    }
    Node *nodeToInsert = new Node(d);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

void deleteNode(int position, Node *&head,Node *&tail)
{
    // deleting the start node

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        // memory free start node
        temp->next=NULL;
        delete temp;
    }
    else
    {

        // deleing any middle or last node
        Node *current=head;
        Node* previous=NULL;

        int cnt=1;

        while(cnt<position){
            previous=current;
            current=current->next;
            cnt++;

          
        }
          previous->next=current->next;

          //pointing the tail to last position 
        if(current->next==NULL){
            tail=previous;
        }
            current->next=NULL;
            delete current;

        
    }
}

int main()
{
    // created a node
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;

    // head pointed to node 1
    Node *head = node1;
    Node *tail = node1;
    print(head);

    InserAtTail(tail, 12);
    print(head);
    InserAtTail(tail, 15);
    print(head);

    InsertAtPosition(tail, head, 4, 89);
    print(head);

    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;

    deleteNode(1,head,tail);
    print(head);

    cout << "head " << head->data << endl;
    cout << " tail " << tail->data << endl;

    return 0;
}