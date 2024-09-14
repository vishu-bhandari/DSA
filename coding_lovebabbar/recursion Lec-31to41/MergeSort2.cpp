#include<iostream>
using namespace std;

void merge(int* arr, int s,int mid,int e){

    vector<int> temp;

    int index1=s;
    int index2=mid+1;

    while(index1 <=mid && index2<=e){
        if(arr[index1]>arr[index2]){
            temp.push_back(arr[index2]);
            index2++;
        }else{
            temp.push_back(arr[index1]);
            index1++;
        }
    }
    while(index1<=mid){
        temp.push_back(arr[index1++]);
    }
    while(index2<=e){
        temp.push_back(arr[index2++]);
    }


    for (int i = 0; i < temp.size(); i++) {
        arr[s + i] = temp[i];
    }


}

void mergeSort(int* arr,int s,int e){
    if(s>=e){
        return ;
    }

    int mid=s+(e-s)/2;

    //left part sort 
    mergeSort(arr,s,mid);

    //right part sort
    mergeSort(arr,mid+1,e);

    //merge sorted arrays
    merge(arr,s,mid,e);
}



int main(){


    int arr[5]={2,5,1,6,9};

    int n=5;

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    

    return 0;
}