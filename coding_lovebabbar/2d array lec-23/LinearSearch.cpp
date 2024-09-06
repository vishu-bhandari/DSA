#include<iostream>
using namespace std;


bool LinearSearch(int arr[][3],int key,int row,int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==key){
                return 1;
            }
        }
    }
    return 0;
}


int main(){

    int arr[2][3];

    //row wise input 
    cout<<"enter the array"<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    //printing the array
    cout<<"the 2d array is "<<endl;
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"enter the key you want to search :"<<endl;
    int key;
    cin>>key;

    if(LinearSearch(arr,key,2,3)){
        cout<<"yss mil gaya"<<endl;
    }else{
        cout<<"arre ree nahi milla "<<endl;
    }


    return 0;
}