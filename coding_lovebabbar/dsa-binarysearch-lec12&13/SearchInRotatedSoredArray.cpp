#include <iostream>
using namespace std;

int getPivot(int arr[], int n)
{
    int s = 0, e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int BinarySearch(int arr[], int s, int e, int key)

{
    int start = s;
    int end = e;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }

    return -1;
}

int main()
{

    int arr[100];

    int n;
    cout << "enter the size of array" << endl;
    cin >> n;

    cout << "enter the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int key;
    cout << "enter the value of key" << endl;
    cin >> key;

    int pivot = getPivot(arr, n);

    if (key >= arr[pivot] && key <= arr[n - 1])
    {
        cout << "index of element is " << BinarySearch(arr, pivot, n - 1, key);
    }
    else 
    {
        cout << "index of element is " << BinarySearch(arr, 0, pivot - 1, key);
    }

    return 0;
}