
///homework 
 

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



    return 0;
}
