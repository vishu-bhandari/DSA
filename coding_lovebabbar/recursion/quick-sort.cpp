#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{
    int pivot = arr[s];
    int count = 0;
    for (int i = s + 1; i < e; i++)
    {
        if (arr[i] <= pivot)
        {
            count = count + 1;
        }
    }
    // place pivot at right position
    int pivotindex = s + count;
    swap(arr[pivotindex], arr[s]);

    // left and right wla part sambhal lete hai
    int i = s;
    int j = e;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] < pivot)
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i++], arr[j--]);
        }
    }
    return pivotindex;
}

void quickSort(int arr[], int s, int e)
{
    // base case
    if (s >= e)
    {
        return;
    }

    // partition karege
    int p = partition(arr, s, e);

    // left part sort krege
    quickSort(arr, s, p - 1);

    // right part sort karege
    quickSort(arr, p + 1, e);
}

int main()
{

    int arr[10] = {2, 4, 1, 6, 9, 9, 7, 8, 9, 9};
    int n = 10;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}