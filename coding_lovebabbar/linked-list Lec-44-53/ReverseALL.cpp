#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }   
};

Node* reverse(Node* &head){

    Node* prev=NULL;
    Node* curr=head;

    Node * forward=NULL;

    if(head==NULL || head->next==NULL){
        return head;
    }

    while(curr!=NULL){
  forward=curr->next;
    curr->next=prev;
    prev=curr;
    curr=forward;
    }
    return prev;

}

void InsertAtHead(Node* &head,int data){

    Node *temp=new Node(data);

    temp->data=data;
    temp->next=head;
    head=temp;

}

void print(Node* &head){

    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }cout<<endl;
    

}

int main(){

    Node *node1=new Node(10);
    Node *head=node1;

    InsertAtHead(head,20);
    print(head);
    InsertAtHead(head,30);
    print(head);
    InsertAtHead(head,40);
    print(head);
    InsertAtHead(head,50);
    print(head);

    head=reverse(head);
    print(head);

    return 0;
}