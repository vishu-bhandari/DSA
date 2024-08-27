#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    int i = 1;
    int temp;
    while (i < n)
    {
        temp = arr[i];
        int j = i - 1;
        while (j >= 0)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
                j--;
            }
            else
            {
                break;
            }
        }
        arr[j + 1] = temp;
        i++;
    }
}

int main()
{

    int n;
    cout << "enter the size of the array " << endl;
    cin >> n;
    int arr[100];

    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}