#include<iostream>
using namespace std;



int  getSum(int Arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+Arr[i];
    }
    return sum;
}

int main(){

    int size;
    cout<<"enter the value of size "<<endl;
    cin>>size;

    int Arr[100];
    cout<<"enter the value of arrays "<<endl;
    for(int i=0;i<size;i++){
        cin>>Arr[i];
    }

    cout<<"the value of sum is "  << getSum(Arr,size)<<endl;;




    return 0;
}