// 1. ap given [ arithmetic progression ] , 
// ( 3*n+7) , so in input -> n 
// will be given so we have to give the nth term using the formula


#include<iostream>
using namespace std;

int AP(int n){
    return (3*n)+7;
}

int main(){

    int n;
    cout<<"enter the value of n"<<endl;

    cin>>n;

    cout<<"the answer is "<<AP(n)<<endl;

    return 0 ;
}