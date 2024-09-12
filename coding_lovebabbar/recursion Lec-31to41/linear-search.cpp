#include <iostream>
using namespace std;

void print(int *arr,int size){
    cout<<"size of array is "<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}

bool linearsearch(int *arr,int size,int key){
    print(arr,size);
    //base case 
    if(size==0){
        return false;
    }

    //recursive call
    if(arr[0]==key){
        return true;
    }else{
       return linearsearch(arr+1,size-1,key);
    }
    return 0;
}

int main()
{
    int arr[5] = {3, 5, 1, 2, 6};
    int size = 5;
    int key = 8;
    bool ans = linearsearch(arr, size, key);
    if (ans)
    {
        cout << "present in the array" << endl;
        ;
    }
    else
    {
        cout << "absent in the array" << endl;
        ;
    }

    return 0;

   
}