#include<iostream>
using namespace std;


void printArray(int arr[],int size ){
    cout<<"printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"printing Done "<<endl;
}

int main(){
    int n=15;
    int third[15]={5,7};
    printArray(third,15);

     n=10;
    int fourth[10]={0};
    printArray(fourth,10);

     n=10;
    int fifth[10]={1};
    printArray(fifth,10);

     n=10;
    int sixth[10];
    printArray(sixth,10);

    int fifthSize=sizeof(fifth)/sizeof(int);
    cout<<"the size of fifth is "<<fifthSize<<endl;

    int thirdSize=sizeof(third)/sizeof(int);
    cout<<"the size of third is "<<thirdSize<<endl;



    

    cout<<"everything is fine"<<endl;
}