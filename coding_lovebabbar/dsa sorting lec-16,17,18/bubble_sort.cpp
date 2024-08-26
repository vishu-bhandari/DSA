// lecture 17
// Bubble Sort

// time complexity is 0(n^2)
// Space complexity is 0(1)

#include <iostream>
using namespace std;

void BubbleSort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n;
    cout << "Enter the size of array" << endl;

    cin >> n;

    int arr[100];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    BubbleSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}