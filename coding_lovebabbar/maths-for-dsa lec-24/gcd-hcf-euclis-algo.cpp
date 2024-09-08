#include<iostream>
using namespace std;



int gcd(int a,int b){
    if(a==0){
        return b;
    }
    if(b==0){
        return a;
    }

    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}

int lcm(int a,int b){
    int Gcd=gcd(a,b);

    return (a*b)/Gcd;
}


int main(){

    int a,b;
    cout<<"enter the values of a and b"<<endl;
    cin>>a>>b;

    int ans=gcd(a,b);
    cout<<"the gdc of "<<a << "& "<<b<<" is :"<<ans<<endl;

    int Lcm=lcm(a,b);
    cout<<"lcm of a and b is "<<Lcm<<endl;

    return 0;
}