#include <iostream>
using namespace std;

int main(){


int n;
cout << "enter the value of n" << endl;
cin >> n;

int a=0;
int b=1;
cout<< a <<" "<< b <<" ";
for(int i=1;i<=n;i++){
    int sum=a+b;
    cout<<sum<<" ";
    a=b;
    b=sum;
}

}



















    // int main(){

    //     int n=10;

    //     int a=0;
    //     int b=1;
    //     cout<<a<<" "<<b<<" ";
    //     for(int i=1;i<=n;i++){
    //         int nextnum=a+b;
    //         cout<<nextnum<<" ";

    //         a=b;
    //         b= nextnum;

    //     }

    // }