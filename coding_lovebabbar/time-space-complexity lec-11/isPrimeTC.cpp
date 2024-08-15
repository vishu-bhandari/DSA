#include<iostream>
using namespace std;

//1-> prime number
//0-> not a primer number

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
//Time complexity is 0(n)


int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    bool prime=isPrime(n);

    if(prime){
        cout<<"n is a prime number"<<endl;
    }
    else{
        cout<<"not a prime number"<<endl;
    }




    return 0;
}