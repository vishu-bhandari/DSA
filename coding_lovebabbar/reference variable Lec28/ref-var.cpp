#include<iostream>
using namespace std;


int main(){

    int i =5;
    // create a ref var
    int &j=i;
    cout<<&i<<endl;
    
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    return 0;
}