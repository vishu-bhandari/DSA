// selection sort
// use when array size is small

// time complexity -> 0(n^2)
// space complexity -> 0(1)

#include <iostream>
using namespace std;

void SelectionSort(int arr[], int n)
{
    int MinIndex = 0;

    for (int i = 0; i < n - 1; i++)
    {
        MinIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[MinIndex])
            {
                MinIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[MinIndex];
        arr[MinIndex] = temp;
    }
}

int main()
{
    int n;
    cout << "enter the size of the array" << endl;
    cin >> n;

    int vb[100];
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> vb[i];
    }

    SelectionSort(vb, n);

    cout << "sorted array is " << endl;

    for (int i = 0; i < n; i++)
    {
        cout << vb[i] << " ";
    }

    return 0;
}
