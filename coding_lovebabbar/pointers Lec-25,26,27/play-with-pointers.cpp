#include<iostream>
using namespace std;

int main(){

    // pointer to int is created and pointing to some garbage adress
    // int *p=0;

    // cout<<*p<<endl;

    int i=5;
    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;
    
    int *p=0;
    p= &i;
    cout<<p<<endl;
    cout<<*p<<endl;

    return 0;
}