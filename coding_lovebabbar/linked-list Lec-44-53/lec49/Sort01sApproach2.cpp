#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;

    }
};


void insertNode(node * &head,int data){
    node* temp=new node(data);

    temp->data=data;
    temp->next=head;
    head=temp;

}

void print(node * &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

void populate(node * &tail,node * curr){
    tail->next=curr;
    tail=curr;
}

node* SortList(node *head){

    node* zeroHead=new node(-1);
    node * zeroTail=zeroHead;
    node* oneHead=new node(-1);
    node* oneTail=oneHead;
    node* twoHead=new node(-1);
    node* twoTail=twoHead;


    node* curr=head;

    while(curr!=NULL){
        int value=curr->data;
        if(value==0){
           populate(zeroTail,curr);
        }else if(value==1){
            populate(oneTail,curr);
        }else if(value==2){
            populate(twoTail,curr);
        }

        curr=curr->next;
    }

    //merge 3 sublist 
    if(oneHead->next!=NULL){
        zeroTail->next=oneHead->next;
    }else{
        oneTail->next=twoHead->next;
    }

    oneTail->next=twoHead->next;
    twoTail->next=NULL;


    head=zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return head;



}

int main(){
    node* node1=new node(0);
    node* head=node1;
   
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,1);
    insertNode(head,0);
    print(head);
    cout<<endl;
    SortList(head);
    print(head);


    return 0;
}