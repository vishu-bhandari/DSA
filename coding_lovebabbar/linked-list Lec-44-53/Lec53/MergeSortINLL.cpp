#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertNode(node *&head, int data)
{
    node *newNode = new node(data);

    if (head == NULL)
    {
        head = newNode;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newNode;
}

void print(node *&head)
{
    node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

node* merge(node* left,node* right){
    if(left==NULL){
        return right;
    }
    if(right==NULL){
        return left;
    }

    node* ans=new node(-1);

    node* temp=ans;

    while(left!=NULL && right!=NULL){
        if(left->data<right->data){
            temp->next=left;
            temp=left;
            left=left->next;
        }else{
            temp->next=right;
            temp=right;
            right=right->next;
        }
    }
    while(left!=NULL){
         temp->next=left;
            temp=left;
            left=left->next;
    }
    while(right!=NULL){
        temp->next=right;
        temp=right;
        right=right->next;
    }
    ans=ans->next;
    return ans;
}

node* findMid(node* head){
    node* slow=head;
    node* fast=head->next;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;

    }
    return slow;
}

node* mergeSort(node * head){
    //base case 
    if(head==NULL || head->next==NULL){
        return head;


    }

    //step2: spliting into two halves 
    node* mid=findMid(head);

    node* left=head;
    node* right=mid->next;

    mid->next=NULL;

    //recursive calls

    left=mergeSort(left);
    right=mergeSort(right);

    //merge both left and right halves 
    node* result=merge(left,right);

    return result;
}

int main()
{
    node *node1 = new node(3);
    node *head1 = node1;

    insertNode(head1, 5);
    insertNode(head1, 1);
    insertNode(head1, 2);
    insertNode(head1, 9);

    cout << "First List: ";
    print(head1);
    cout << endl;


    cout<<"merge sort"<<endl;
    node* merging=mergeSort(head1);
    print(merging);
    cout<<endl;

    return 0;
}
