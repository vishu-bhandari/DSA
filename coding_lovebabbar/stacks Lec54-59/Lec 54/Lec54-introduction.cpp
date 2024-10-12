#include <iostream>
using namespace std;
#include <stack>

class Stack
{
    // properties
public:
    int *arr;
    int top;
    int size;

    // behaviour

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"stack overflowed"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }else{
            cout<<"stack underflow"<<endl;
        }

    }

    int peak(){

        if(top>=0 && top<size){

        return arr[top];
        }else{
            cout<<"stack is empty ";
            return -1;
        }

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }else{
            false;
        }
    }
};

int main()
{

    stack st(5);

    // stack<int> s;....

    // s.push(2);
    // s.push(3);
    // s.pop();

    // cout<<"printing top element :"<<s.top()<<endl;

    // if(s.empty()){
    //     cout<<"stack is empty "<<endl;
    // }else{
    //     cout<<"empty nahi hai oe "<<endl;
    // }

    // cout<<"size of the stack is: "<<s.size()<<endl;

    return 0;
}