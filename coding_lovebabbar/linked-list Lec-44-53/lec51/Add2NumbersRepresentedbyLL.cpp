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




int main(){
    node* node1 = new node(1);
    node* head1 = node1;
   
   
    insertNode(head1, 0);
    insertNode(head1, 0);
    insertNode(head1, 0 );
    cout << "First List: ";
    print(head1);
    cout << endl;

    
    
   

    return 0;
}