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

node* SortList(node* &head){
    int zeroCount=0;
    int oneCount=0;
    int twoCount=0;

    node* temp=head;

    while(temp!=NULL){
        if(temp->data==0){
            zeroCount++;
        }
        else if(temp->data==1){
            oneCount++;
        }else if(temp->data==2){
            twoCount++;
        }
        temp=temp->next;
    }

    temp=head;
    while(temp!=NULL){
        if(zeroCount!=0){
            temp->data=0;
            zeroCount--;
        }else if(oneCount!=0){
            temp->data=1;
            oneCount--;
        }else if(twoCount!=0){
            temp->data=2;
            twoCount--;
        }
        temp=temp->next;
    }
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