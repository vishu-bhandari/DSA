// sum of all even no.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value of n"<< endl;
    cin>>n;

    int i=2;
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+2;
            }
            cout<<"the value of sum is "<<sum;
}