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

void solve(node* &first, node* &second){

    node* curr1=first;
    node* next1=curr1->next;

    node* curr2=second;
    node* next2=NULL;

    if( curr1->next == NULL){
        curr1->next = curr2;
        return;
    }

    while(next1 != NULL && curr2 != NULL){
        if(curr2->data >= curr1->data && curr2->data <= next1->data){
            // Insert curr2 between curr1 and next1
            curr1->next = curr2;
            next2 = curr2->next;
            curr2->next = next1;

            // Move curr1 and curr2 pointers forward
            curr1 = curr2;
            curr2 = next2;
        }else{
            // Move curr1 and next1 pointers forward
            curr1 = next1;
            next1 = next1->next;

            if(next1 == NULL){
                // If we reached the end of the first list, append the rest of the second list
                curr1->next = curr2;
            }
        }
    }
}

node* MergeList(node* head1, node* head2){

    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }

    if(head1->data <= head2->data){
         solve(head1, head2);
         return head1;
    }else{
         solve(head2, head1);
         return head2;
    }
}

int main(){
    node* node1 = new node(1);
    node* head1 = node1;
    node* node2 = new node(10);
    node* head2 = node2;
   
    insertNode(head1, 2);
    insertNode(head1, 3);
    insertNode(head1, 4);
    cout << "First List: ";
    print(head1);
    cout << endl;

    insertNode(head2, 20);
    insertNode(head2, 30);
    insertNode(head2, 40);
    cout << "Second List: ";
    print(head2);
    cout << endl;
    
    node* mergedHead = MergeList(head1, head2);
    cout << "Merged List: ";
    print(mergedHead);

    return 0;
}
