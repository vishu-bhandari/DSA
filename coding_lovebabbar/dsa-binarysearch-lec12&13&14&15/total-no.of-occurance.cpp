#include<iostream>
using namespace std;

int firstOccurance(int arr[],int size,int key){
    int s=0;int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            e=mid-1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}
int lastOccurance(int arr[],int size,int key){
    int s=0;int e=size-1;
    int mid=(s+e)/2;
    int ans=-1;

    while(s<=e){
        if(key==arr[mid]){
            ans=mid;
            s=mid+1;
        }
        if(key>arr[mid]){
            s=mid+1;
        }
        if(key<arr[mid]){
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}


int main(){

    int even[8]={1,2,3,3,5,3,3,5};

    int ans1= firstOccurance(even,8,3);
    cout<<"first occ:"<<ans1<<endl;
    int ans2=lastOccurance(even,8,3);
    cout<<"last occ: " << ans2<<endl;

    int ans3=(ans2-ans1);
    cout<<"total no. of occurance"<<ans3<<endl;
    return 0;
}