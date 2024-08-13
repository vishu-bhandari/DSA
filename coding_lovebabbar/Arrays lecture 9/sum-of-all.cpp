#include<iostream>
using namespace std;

int getSum(int sum[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans+=sum[i];
    }
    return ans;
}

int main(){

    int size;
    cout<<"Enter the value of size"<<endl;
    cin>>size;

    int sum[100];

    //taking input 
    cout<<"taking input "<<endl;
    for(int i=0;i<size;i++){
        cin>>sum[i];
    }
    cout<<"The sum is : "<<getSum(sum,size)<<endl;



    return 0;
}