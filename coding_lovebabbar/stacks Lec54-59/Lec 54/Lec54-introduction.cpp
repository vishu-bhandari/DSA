#include <iostream>
using namespace std;
#include <stack>

class Stack{
    //properties 
    public:
        int *arr;
        int top;
        int size;


        //behaviour
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
                cout<<"Stack overflow"<<endl;
            }
        }
        void pop(){
            if(top>=0){
                top--;
            }else{
                cout<<"Stack underflow"<<endl;
            }

        }
        int peak(){
            if(top>=0 && top<size){

            return arr[top];
            }else{
                cout<<"stack is empty "<<endl;
            }

        }
        bool isEmpty(){
            if(top==-1){
                return true;
            }else{
                return false;
            }
        }
};



int main()
{

    Stack st(5);

    st.push(22);
    st.push(23);
    st.push(24);
    st.push(25);

    cout<<st.peak()<<endl;


    // stack<int> s;

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