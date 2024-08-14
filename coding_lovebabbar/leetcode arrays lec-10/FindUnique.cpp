#include<iostream>
using namespace std;


int findUnique(int arr[],int size){

    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;

}


int main(){

    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int m=2*n+1;

    int arr[100];
    cout<<"enter the input for array"<<endl;
    for(int i=0;i<m;i++){
        cin>>arr[i];
    }cout<<endl;

    int answer=findUnique(arr,m);
    cout<<"the answer is "<<answer<<endl;
    return 0;
}