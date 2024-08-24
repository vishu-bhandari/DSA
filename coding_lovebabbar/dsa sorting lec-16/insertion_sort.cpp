#include<iostream>
using namespace std;
#include<vector>

// #include <bits/stdc++.h> 
void insertionSort(int arr[], int n){
    for( int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp){
                // shift
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    
}
void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        cout<<endl;
}

int main(){
   
    int arr1[5]={3,5,6,1,2};
    insertionSort(arr1,5);

    printArray(arr1,5);
    
}