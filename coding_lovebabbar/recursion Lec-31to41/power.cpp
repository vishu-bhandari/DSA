#include <iostream>
using namespace std;


int Power(int n){
    if(n==0){
        return 1;
    }

  
return 2*Power(n-1);
}

int main()
{   
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    cout<<Power(n)<<endl;

    return 0;
}