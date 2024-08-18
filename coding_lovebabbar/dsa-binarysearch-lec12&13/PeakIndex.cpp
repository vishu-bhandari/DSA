#include<iostream>
using namespace std;

int PeakIndex(int arr[],int n ){

    int start=0;
    int end=n-1;
    int mid=start + (end-start)/2;

    while(start<end){
        if(arr[mid]<arr[mid+1]){
            start=mid+1;
        }
        else{
            end=mid;
        }

        mid=start + (end-start)/2;
    }
    return start;

}


int main(){
    
    int arr[5]={1 ,2 ,4 ,5, 3 };

    cout<<PeakIndex(arr,5);


    return 0;
}