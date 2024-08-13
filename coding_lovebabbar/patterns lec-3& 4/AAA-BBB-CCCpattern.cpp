// AAA 
// BBB
// CCC 

#include<iostream>
using namespace std;


int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int i=1;
    char ch;
    while(i<=n){
        int j=1;
        while(j<=n){
            ch='A'+i-1;
            cout<<ch;
            j++;
        }
        cout<<endl;
        i++;
    }


    return 0;
}