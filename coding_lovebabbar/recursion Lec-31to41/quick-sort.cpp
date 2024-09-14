#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];

    int count = 0;
    for (int i = s + 1; i <= e; i++)
    {
        if (arr[i] <= pivot)
        {
            count++;
        }
    }
    // placing pivot at the his right index
    int pivotIndex = s + count;
    swap(arr[pivotIndex], arr[s]);

    //left and right part solve 

    int i=s,j=e;

    while(i<pivotIndex && j>pivotIndex){
        while(arr[i]<=pivot && i<pivotIndex){
            i++;
        }
        while(arr[j]>pivot && j>pivotIndex){
            j--;
        }

        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIndex;
}

void quickSort(int arr[], int s, int e)
{

    // base case

    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // recursive call
    // left part sort
    quickSort(arr, s, p - 1);
    // right part sort
    quickSort(arr, p+1, e);
}

int main()
{

    int arr[5] = {2, 4, 1, 6, 9};
    int n = 5;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}