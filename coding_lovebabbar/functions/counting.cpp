#include<iostream>
using namespace std;

// function signature 
void printCounting(int n){
    // function body 
     for(int i=1;i<=n;i++){
        cout<<i<<" ";
     }
}

int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    // function call 
    printCounting(n);
    cout<<endl;

}