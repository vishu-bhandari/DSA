#include<iostream>
using namespace std;

int main(){
    int a=3;
    cout<<a<<endl;
    // for a garbage value has been allocated 
    if(true){
        int a=5;
        cout<<a<<endl;
    }
    cout<<a<<endl;
}
