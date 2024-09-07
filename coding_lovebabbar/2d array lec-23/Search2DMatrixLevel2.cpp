#include<iostream>
using namespace std;

bool Search2D(int arr[][3],int nrow,int mcol,int target){
    int row=nrow;
    int col=mcol;

    //starting with the top right corner of the matrix 

    int rowIndex=0;
    int colIndex=col-1;

    while(rowIndex<row && colIndex>=0){
        int element=arr[rowIndex][colIndex];
        if(element==target){
            return true;

        }
        if(element>target){
            colIndex--;
        }
        if(element<target){
            rowIndex++;
        }

    }
    return false;
}


int main(){


    int arr[3][3];

    cout<<"input the answer"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"your inputed  answer"<<endl;

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    int target;
    cout<<"enter the value to search"<<endl;
    cin>>target;


    bool answer=Search2D(arr,3,3,target);
    if(answer){
        cout<<"present hai "<<endl;
    }else{
        cout<<"dang it"<<endl;
    }




    return 0;
}