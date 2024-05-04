#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;

}

int main(){
    // declare

    int num[15];
    int nums[10];

    // accessing an array 
    cout<<"the value of num at 14 is "<<num[14]<<endl;
    cout<<"the value of nums at 10 is "<<num[10]<<endl;

    // cout<<"value of num at 20 is "<<num[20]<<endl;


    // initialising an array 
   int second[3]={5,7,11};
   int first[4]={1,2,3,4};


    //accessing an element 
    cout<<"the value at second[3] is "<<second[2]<<endl;
   


    int third[15]={2,7};
    

    int n=15;
    // cout<<"printing the array "<<endl;
    // //printing the array 
    // for(int i=0;i<n;i++){
    //     cout<<third[i]<<" ";
    // }
    printArray(third,15);
    cout<<"size of third is "<<sizeof(third)/sizeof(int);

    cout<<endl;

    // initialising all locations with zero 
    int fourth[10]={0};
    // int nb=10;
    // for(int i=0;i<nb;i++){
    //     cout<<fourth[i]<<" ";
    // }}}}
    printArray(fourth,10);
    cout<<endl;

    int fifth[10]={1};
    // n=10;
    // for(int i=0;i<n;i++){
    //     cout<<fifth[i]<<" ";
    // }
    printArray(fifth,10);
    int fifthsize=sizeof(fifth)/sizeof(int);
    cout<<"size of fifth is "<<fifthsize;
    cout<<endl;

   int sixth[10];
    // int ns=10;
    // for(int i=0;i<=ns;i++){
    //     sixth[i]=5;
    //     cout<<sixth[i]<<" ";
    // }
    printArray(sixth,10);


    



    

    cout<<endl;
    cout<<"everything is fine "<<endl;
    return 0;
}