#include<iostream>
using namespace std;


int power(int n){

    // base case 
    if(n==0){
        return 1;
    }
    // recursive relation 
    int smallerprob=power(n-1);
    int biggerprob=2*smallerprob;

    return biggerprob;
}

int main(){

    int n;
    cin>>n;

    int ans=power(n);
    cout<<ans<<endl;




    return 0;
}