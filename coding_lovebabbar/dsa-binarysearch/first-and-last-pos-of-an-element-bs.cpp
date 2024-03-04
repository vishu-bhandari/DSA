#include <iostream>
using namespace std;




int firstoccurance( int arr[],int size,int key){
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
int lastoccurance(int arr[],int size,int key){
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


int main()
{
    int even [11]={1,2,3,3,5,3,3,3,3,3,5} ;
int ans1= firstoccurance(even, 11,3);
cout<<"first occ:"<<ans1<<endl;
cout<<"last occ:"<< lastoccurance (even, 11,3);
}  