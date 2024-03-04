#include<iostream>
using namespace std;


int getMax(int num[], int n){
    int max=INT_MIN;

    for(int i=0;i<n;i++){
        if(num[i]>max){
            max=num[i];
        }
    }
    // returing max value 
    return max;
}
int getMin(int num[], int n){
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
    //     if(num[i]<min){
    //         min=num[i];
    //     }
    mini=min(mini,num[i]);

    }
    // returing min value 
    return mini;
}

int main(){

    int size;
    cout<<"enter the size"<<endl;
    cin>>size;


    int num[100];
    // taking input in the array 
    for(int i=0;i<size;i++){
        cin>>num[i];
    }

    cout<<"max value is "<<getMax(num,size)<<endl;
    cout<<"min value is "<<getMin(num,size)<<endl;





    return 0;
}