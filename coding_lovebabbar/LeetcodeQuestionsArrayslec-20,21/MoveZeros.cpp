#include <iostream>
using namespace std;

void moveZeros(int arr[], int n)
{
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    cout << endl;

    int arr[100];
    cout << "Enter the array" << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    moveZeros(arr, n);

    cout << "printing the array" << endl;

    printArray(arr, n);

    cout<<endl;

    return 0;
}