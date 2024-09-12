#include <iostream>
using namespace std;

int Climb(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }

    return Climb(n-1)+Climb(n-2);
}

int main()
{

    int n;
    cout<<"enter the number of stairs "<<endl;

    cin>>n;

    cout<<Climb(n)<<endl;


    return 0;
}