#include<iostream>
using namespace std;


int fact(int n){

    // //base case 
    // if(n==0){
    //     return 1;
    // }

    // //recursive function 
    // return n*fact(n-1);

    return n==0?1:n*fact(n-1);
}


int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    cout<<"factorial of a number " << n<< " is" <<endl;
    cout<<fact(n)<<endl;


    return 0;
}