#include <iostream>
using namespace std;

int findUnique(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++) 
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }

        if (count == 1) 
        {
            return arr[i];
        }
    }
    return -1; 
}

int main()
{
    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int m = 2 * n + 1;

    int arr[100];
    cout << "enter the array " << endl;
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int answer = findUnique(arr, m);
    cout << "answer is " << answer << endl;

    return 0;
}
