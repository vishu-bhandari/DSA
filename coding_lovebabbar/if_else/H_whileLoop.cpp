// find sum of all even no's.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    int i=2;
    int sum=0;
    while(i<=n){
        sum=sum+i;
        i=i+2;
    }
    cout<<"value of sum of even no. is "<<sum<<endl;

    return 0;
}