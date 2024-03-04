#include<iostream>
using namespace std;

void printArray(int n){

}

int main(){
    // declare

    int num[15];

    // accessing an array 
    cout<<"value of num at 14 is "<<num[14]<<endl;

    // cout<<"value of num at 20 is "<<num[20]<<endl;


    // initialising an array 
    int second[3]={5,7,11};


    //accessing an element 
    cout<<second[2]<<endl;


    int third[15]={2,7};
    

    int n=15;
    cout<<"printing the array "<<endl;
    //printing the array 
    for(int i=0;i<n;i++){
        cout<<third[i]<<" ";
    }

    cout<<endl;

    // initialising all locations with zero 
    int fourth[10]={0};
    int nb=10;
    for(int i=0;i<nb;i++){
        cout<<fourth[i]<<" ";
    }
    cout<<endl;

    int fifth[10]={1};
    n=10;
    for(int i=0;i<n;i++){
        cout<<fifth[i]<<" ";
    }
    cout<<endl;

    int sixth[10];
    n=10;
    for(int i=0;i<n;i++){
        sixth[i]=5;
        cout<<sixth[i]<<" ";
    }





    

    cout<<endl;
    cout<<"everything is fine "<<endl;
    return 0;
}