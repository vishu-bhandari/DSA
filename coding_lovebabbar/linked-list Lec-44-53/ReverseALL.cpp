#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    //constructor
    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};


Node* reverse(Node * &head){

    Node* curr=head;
    Node* prev=NULL;
    Node* forward=NULL;

    if(head==NULL || head->next==NULL){
        return head;
    }
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
   return head=prev;
}

void InsertAtHead(Node *&head, int data)
{

    // new node creation
    Node *temp = new Node(data);

    temp->next = head;
    head = temp;
}

void print(Node *head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
}

int main()
{
    Node *node1=new Node(10);
    Node *head=node1;
    InsertAtHead(head,20);

    print(head);

     reverse(head);
    print(head);

    return 0;
}