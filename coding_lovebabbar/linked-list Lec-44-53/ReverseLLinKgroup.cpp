#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }


};


void insertAtHead(Node* &head,int data){
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

void ReverseK(Node* &head,int k){

    int size=0;

    Node *temp=head;
    if(temp!=NULL){
        size++;
        temp=temp->next;
    }
    if(size<k){
        print(head) ;
    }

    if(head==NULL ){
       print(head);
    }

    Node* prev=NULL;
    Node * curr=head;
    Node* next=NULL;
    int count=0;

    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        next=curr;
        count++;
    }
    print(prev);
}



int main(){

    Node *node1=new Node(10);
    Node* head=node1;

    insertAtHead(head,11);
    print(head);
    insertAtHead(head,12);
    print(head);
    insertAtHead(head,13);
    print(head);
    insertAtHead(head,14);
    print(head);
   
    int k=2;

    ReverseK(head,k);
   

    return 0;
}