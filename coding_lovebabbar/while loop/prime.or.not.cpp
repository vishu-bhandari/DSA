// given number is prime or not 
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;

    int i=2;
    while(i<n){
        if(n%i==0){
            cout<<"n is not prime "<<i<<endl;
        }
        else{
            cout<<"n is  prime "<<i<<endl;
        }
        i=i+1;
    }
    
}