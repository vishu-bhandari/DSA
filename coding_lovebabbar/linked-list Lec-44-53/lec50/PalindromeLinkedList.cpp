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

bool checkPalindrome(vector<int> ans){
    int n=ans.size();
    int s=0;
    int e=n-1;

    while(s<=e){
        if(ans[s]!=ans[e]){
            return false;
        }
        s++;
        e--;
    }
    return true;
}


bool isPalindrome(node* head){
    if(head==NULL){
        return true;
    }

    vector<int> ans;

    node* temp=head;

    while(temp!=NULL){
        ans.push_back(temp->data);
        temp=temp->next;
    }
    return checkPalindrome(ans);
}



int main(){
    node* node1 = new node(1);
    node* head1 = node1;
   
   
    insertNode(head1, 0);
    insertNode(head1, 0);
    insertNode(head1, 1);
    cout << "First List: ";
    print(head1);
    cout << endl;

   
    
   if(isPalindrome(head1)){
    cout<<"palindrome hai bahi"<<endl;
   }else{
    cout<<"palindrome toh nahi ah ibro "<<endl;
   }

    return 0;
}
