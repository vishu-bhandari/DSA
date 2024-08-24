#include<iostream>
using namespace std;

void SelectionSort(int arr[],int n ){
    int MinIndex=0;

    for(int i=0;i<n-1;i++){
        MinIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[MinIndex]){
                MinIndex=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[MinIndex];
        arr[MinIndex]=temp;
    }
}

int main(){

    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    cout<<endl;

    int arr[100];
    cout<<"enter the array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }cout<<endl;

    SelectionSort(arr,n);
    cout<<"sorted array is: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}