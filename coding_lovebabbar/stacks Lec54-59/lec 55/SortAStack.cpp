#include<iostream>
using namespace std;
#include<stack>


void sortedInsert(stack<int>& s,int num){
    //base case 
    if(s.empty()|| (!s.empty() && s.top()<num)){
        s.push(num);
        return ;
    }

    int n=s.top();
    s.pop();
    //recursive call
    sortedInsert(s,num);
    s.push(n);
}

void sortStack(stack<int>& s){
    //base case 
    if(s.empty()){
        return ;
    }

    int num=s.top();
    s.pop();

    //recursive call
    sortStack(s);

    sortedInsert(s,num);
}


int main(){

    stack<int> s;
    s.push(3);
    s.push(-7);
    s.push(9);
    s.push(-2);
    s.push(5); 

     

    sortStack(s);

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}