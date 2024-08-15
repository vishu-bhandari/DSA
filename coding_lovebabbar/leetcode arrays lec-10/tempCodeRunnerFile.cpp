void PrintArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void Sort(int arr[],int n){
    int j=n-1;
    int i=0;
   while(i<=j){
     if(arr[i]==0){
        i++;
    }else if(arr[j]==1){
        j--;
    }else if(arr[i]==1 && arr[j]==0){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
   }
   PrintArray(arr, n);