#include<iostream>
using namespace std;


void update(int arr[],int size){

    cout<<"inside the function "<<endl;
// updating the array 
    arr[0]=120;
// printing the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;




    cout<<"going back to main"<<endl;
}

int main(){
    int arr[3]={1,2,3};

    update(arr,3);

//priting the array
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";
    }


    return 0;
}