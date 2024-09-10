#include<iostream>
using namespace std;

void Count(int n){

    if(n==0){
        return ;
    }

    Count(n-1);
    cout<<n<<" ";


}


int main(){

    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    Count(n);



    return 0;
}