//humnai power walle question mai pahele ans=ans*a; kia tha for b times , a^b , 
//toh time complexity was 0(b) but now we will do it with a fastExponentiation method 
//with this time complexity will come 0( logn);

#include<iostream>
using namespace std;


int modularExponentiation(int x,int n,int m){

    int result=1;

    while(n>0){
        if(n&1){
            result=( 1LL* result* (x)%m)%m;


        }
        x= (1LL*(x)%m*(x)%m)%m;
        n=n>>1;
    }
    return result;
}

int main(){


    int x,n,m;
    cout<<"enter the value of x,n,m"<<endl;
    cin>>x>>n>>m;

    cout<<modularExponentiation(x,n,m);




    return 0;
}