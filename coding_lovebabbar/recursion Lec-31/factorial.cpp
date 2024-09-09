#include<iostream>
using namespace std;

int factorial(int n){
    // base case 
    
    if(n==0){
       return  1;
    }
    
    
    int choti=factorial(n-1);
    int badi=n*choti;

    return badi;
    // return n*factorial(n-1);
}

int main(){
    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<ans<<endl;


    return 0;
}