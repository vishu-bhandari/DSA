#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);

    temp->data = data;
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void findMiddle(Node *&head)
{

    if (head == NULL || head->next == NULL)
    {
        print(head);
    }

    if(head->next->next==NULL){
        print(head->next);
    }

    Node *fast=head->next;
    Node *slow=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
        }
        slow=slow->next;
    }
    print(slow);
}

int main()
{

    Node *node1 = new Node(10);
    Node *head = node1;

    insertAtHead(head, 11);

    insertAtHead(head, 12);

    insertAtHead(head, 13);

    insertAtHead(head, 14);
    print(head);

    findMiddle(head);
    

    return 0;
}
