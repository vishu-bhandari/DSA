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

Node* ReverseK(Node* &head,int k){

    int size=0;

    Node *temp=head;
    while(temp!=NULL){
        size++;
        temp=temp->next;
    }
    if(size<k){
        return head ;
    }

    if(head==NULL ){
       return head;
    }

    Node* prev=NULL;
    Node * curr=head;
    Node* next=NULL;
    int count=0;

    while(curr!=NULL && count<k){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }

    //recursive call 
    if(next!=NULL){
        head->next=ReverseK(next,k);
    }

   return prev;
}



int main(){

    Node *node1=new Node(10);
    Node* head=node1;

    insertAtHead(head,11);
    
    insertAtHead(head,12);
   
    insertAtHead(head,13);
   
    insertAtHead(head,14);
    print(head);
   
    int k=2;
    cout<<"this is the reversed linked list with k = "<<k<<endl;
    head=ReverseK(head,k);
    print(head);
   
   

    return 0;
}