#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size,int key){
    int start=0;
    int end=size-1;

    int mid=start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return -1;
}

int main(){

    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

    int index=BinarySearch(even,6,18);
    cout<<"Index of 12 is "<<index<<endl;
    int index1=BinarySearch(odd,5,20);
    cout<<"Index of 20 is "<<index1<<endl;




    return 0;
}