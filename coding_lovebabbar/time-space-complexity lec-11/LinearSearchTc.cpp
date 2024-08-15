#include<iostream>
using namespace std;

void print (int arr[],int n){
    cout<<"size of the array is "<<n<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}

bool linearsearch(int arr[], int size, int key){
    print(arr,size);

    // base case 
    if(size==0){
        return false;
    }

    if(arr[0]==key){
        return true;
    }
    else{
        bool remainingpart=linearsearch(arr+1,size-1,key);
        return remainingpart;
    }
}
//hum key ko check kr re hai purre array mai toh total we did 
//n comparisons so the complexity is 0(n).

int main(){

    int arr[5]={3,5,1,2,6};
    int size=5;
    int key=12;
    bool ans=linearsearch(arr,size,key);
    if(ans){
        cout<<"present in the array"<<endl;;
    }
    else{
        cout<<"absent in the array"<<endl;;
    }


    return 0;
}