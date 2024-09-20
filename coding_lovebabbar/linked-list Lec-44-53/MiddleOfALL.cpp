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


int getLength(Node *head){

    int length=0;

    while(head!=NULL){
        length++;
        head=head->next;
    }
    return length;
}


void findMiddle(Node* &head){

    int len=getLength(head);
    int mid=len/2;


    Node* temp=head;
    int count=0;
    while(count<mid){
        temp=temp->next;
        count++;
    }
    print(temp);

}



int main(){

    Node *node1=new Node(10);
    Node* head=node1;

    insertAtHead(head,11);
   
    insertAtHead(head,12);
    
    insertAtHead(head,13);
   
    insertAtHead(head,14);
    print(head);
   

    cout<<getLength(head)<<endl;
    
    findMiddle(head);
   
  

    return 0;
}