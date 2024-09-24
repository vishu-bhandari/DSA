#include<iostream>
using namespace std;
#include<vector>

class node{
    public:
    int data;
    node* next;

    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void insertNode(node* &head, int data) {
    node* newNode = new node(data);

    if (head == NULL) {
        head = newNode;
        return;
    }

    node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}


void print(node * &head){
    node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


node* getMid(node* head){
    node* slow=head;
    node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;


}

node* reverse(node* head){
    node* curr=head;
    node* next=NULL;
    node* prev=NULL;

    while(curr!=NULL){

        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        
    }
    return prev;
}

bool isPalindrome(node* head){
    if(head==NULL || head->next==NULL){
        return true;
    }

    node* middle=getMid(head);

    node* temp=middle->next;
    middle->next=reverse(temp);

    node* head1=head;
    node* head2=middle->next;

    while(head2!=NULL){
        if(head1->data!=head2->data){
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    temp=middle->next;
    middle->next=reverse(temp);
    return true;



}


int main(){
    node* node1 = new node(1);
    node* head1 = node1;
   
   
    insertNode(head1, 0);
    insertNode(head1, 0);
    insertNode(head1, 0 );
    cout << "First List: ";
    print(head1);
    cout << endl;

    
    if(isPalindrome(head1)){
        cout<<"bdia bhia mere "<<endl;
    } else{
        cout<<"nahi bhai yaar "<<endl;
    }
   

    return 0;
}
