#include<iostream>
using namespace std;

vector<int> PrintWave(int arr[][3],int nrow,int mcol){
    vector <int> ans;
    for(int col=0;col<mcol;col++){

        if(col&1){
            //odd-> move from bottom to top 

            for(int row=nrow-1;row>=0;row--){
                ans.push_back(arr[row][col]);
            }
        }
        else{
            //even-> move from top to bottom
            for(int row=0;row<nrow;row++){
                ans.push_back(arr[row][col]);
            }
        }
    }
   return ans;
}


int main(){

    int arr[3][3];

    cout<<"printing the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"printing the array"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    vector<int> result=PrintWave(arr,3,3);
    

    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;




    return 0;
}