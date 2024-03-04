#include<iostream>
using namespace std;

int main(){
    // int n;
    // cout<<"enter the value of n"<<endl;
    // cin>>n;
    
    // int i=1;
    // while(i<=n){
    //     cout<<i<<" ";
    //     i++;

    // }
    
    // sum of all numbers upto n
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int sum=0;
    int i=1;

    while(i<=n){
        
        sum=sum+i;
        i++;
        
    }
    cout<<"value of sum is "<<sum;

    
}