#include<iostream>
using namespace std;
#include<stack>

void insertAtBottom(stack<int>& s,int element){
    //base case 
      if (s.empty())
    {
        s.push(element);
        return;
    }

    int num = s.top();
    s.pop();
    insertAtBottom(s, element);
    s.push(num);
}

void ReverseStack(stack<int>& s){
    //base case 

    if(s.empty()){
        return ;
    }
    int num=s.top();
    s.pop();

    //recursive call
    ReverseStack(s);

    insertAtBottom(s,num);
}


int main(){


    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);


    ReverseStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    

    return 0;
}