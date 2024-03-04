#include<iostream>
using namespace std;

int main(){

    int n;
    int i=0;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    while(i<n){
        int j=1;
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }

}