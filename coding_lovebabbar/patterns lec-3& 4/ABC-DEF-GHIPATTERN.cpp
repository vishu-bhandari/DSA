#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1;
    char count='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count;
            count= count +1;
            j++;

        }
        cout<<endl;
        i++;
    }
}