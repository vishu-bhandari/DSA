#include<iostream>
using namespace std;

bool isSorted(int arr[],int n){
    
    //base case 

    if(n==0 || n==1){
        return true;
    }

    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }else{
            bool answer=isSorted(arr+1,n-1);
            return answer;
        }
    }
    return 0;
    
}


int main(){

    int arr[100];
    int n;
    cout<<"enter the szie "<<endl;
    cin>>n;
    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"your array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bool ans=isSorted(arr,n);
    if(ans){
        cout<<"array is mast "<<endl;
    }else{
        cout<<"nahi yaar sorted kaha h ye array "<<endl;
    }



    return 0;
}