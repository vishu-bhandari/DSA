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

Node* deleteDuplicates(Node* head){
    //empty list 
    if(head==NULL){
        return NULL;
    }

    Node* curr=head;

    while(curr->next!=NULL){

        if(curr->data==curr->next->data){

            Node* next_next=curr->next->next;
            Node* temp=curr->next;
            delete(temp);
            curr->next=next_next;

        }else{
            curr=curr->next;
        }
    }
    return head;
}

int main(){

    Node *node1=new Node(1);
    Node *head=node1;

    InsertAtHead(head,1);
    
    InsertAtHead(head,2);
   
    InsertAtHead(head,2);
   
    InsertAtHead(head,3);
    print(head);

    deleteDuplicates(head);
    print(head);

    return 0;
}