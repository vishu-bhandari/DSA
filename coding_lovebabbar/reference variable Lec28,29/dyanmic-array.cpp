#include<iostream>

using namespace std;

int getsum(int *arr, int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
    
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    int *arr=new int[n];

    cout<<"enter the array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=getsum(arr,n);
    cout<<"answer is "<<ans <<endl;

    // case 1 
    while(true){
        int i=5;
    }

    // casse 2 
    while(true){
        int *ptr=new int;
    }
       

    return 0;

}