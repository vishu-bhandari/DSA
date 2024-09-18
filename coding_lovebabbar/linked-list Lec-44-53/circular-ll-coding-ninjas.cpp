#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    // constructor
    node(int d)
    {
        this->data = d;
        this->next = NULL;
    }

    ~node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }
};

void insertnode(node *&tail, int element, int d)
{
    // assuming that the element is present in the list

    // empty list
    if (tail == NULL)
    {
        node *newNode = new node(d);
        tail = newNode;
        newNode->next = newNode;
    }
    else
    {
        // non empty list
        // assuming that the element is present in the list

        node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }

        // element found
        node *temp = new node(d);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void print(node *tail)
{
    node *temp = tail;
    if (tail == NULL)
    {
        cout << " list is empty " << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;

    } while (tail != temp);
    cout << endl;
}

void deletenode(node *&tail, int value)
{

    // empty list
    if (tail == NULL)
    {
        cout << " list is empty please check again" << endl;
        return;
    }
    else
    {
        // non empty

        // assuming the 'value' is present in the linked list
        node *prev = tail;
        node *curr = prev->next;
        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = curr->next;

        // 1 node linked list
        if (curr == prev)
        {
            tail = NULL;
        }
        //>=2 node linked list
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}

bool iscircularList(node* head){
    //empty list 
    if(head==NULL){
        return true;
    }
    node* temp=head->next;
    while(temp!=NULL && temp!=head){
        temp=temp->next;
    }
    if(temp==head){
        return true;
    }else{
        return false;
    }
}

int main()
{
    node *tail = NULL;

    // element list me insert kr re hai
    insertnode(tail, 5, 3);
    print(tail);

    insertnode(tail, 3, 5);
    print(tail);

    // insertnode(tail, 5, 7);
    // print(tail);

    // insertnode(tail, 7, 9);
    // print(tail);

    // insertnode(tail, 5, 6);
    // print(tail);

    // insertnode(tail, 9, 10);
    // print(tail);

    // insertnode(tail, 3, 4);
    // print(tail);

    // deletenode(tail, 10);
    // print(tail);

    if(iscircularList(tail)){
        cout<<"linked list is circular in nature ";
    }else{
        cout<<"linked list is not circular in nature";
    }

    return 0;
}