#include<iostream>
using namespace std;

int fibo(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;

    int a = 0, b = 1, sum = 0;
    for (int i = 3; i <= n; i++) {
        sum = a + b;
        a = b;
        b = sum;
    }
    return sum;
}


int main(){

    int n;
    cout<<"Enter the value of n"<<endl; 
    cin>>n;

    cout<<fibo(n)<<endl;


    return 0;
}