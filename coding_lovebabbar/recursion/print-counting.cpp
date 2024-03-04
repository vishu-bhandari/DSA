#include<iostream>
using namespace std;

void count(int n){
    // base case 
    if(n==0){
        return ;
    }
    cout<<n<<" ";
    
    // recursive relation 
    count(n-1);
    cout<<endl;
    cout<<n<<" ";
    
}

int main(){

    int n;
    cin>>n;
    count(n);


    return 0;
}