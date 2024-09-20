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

void reverse(Node* &head,Node* curr,Node* prev){

    //base case 
    if(curr==NULL){
        head=prev;
        return;
    }

    reverse(head,curr->next,curr);
    curr->next=prev;

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
   

    Node* curr=head;
    Node* prev=NULL;

    cout<<"this is the reversed linked list"<<endl;
    reverse(head,curr,prev);
    
    print(head);

    return 0;
}