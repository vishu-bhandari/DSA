#include <iostream>
using namespace std;

bool linearSearch(int arr[], int n, int key)
{

    // base case
    if (n == 0)
    {
        return 0;
    }

    if (arr[0] == key)
    {
        return 1;
    }
    else
    {
        bool present = linearSearch(arr + 1, n - 1, key);
        return present;
    }
}

int main()
{

    int arr[100];

    int n;
    cout << "enter the size of array " << endl;
    cin >> n;

    cout << "enter the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cout << "enter the key you want to find" << endl;

    cin >> key;

    bool ans = linearSearch(arr, n, key);

    if (ans)
    {
        cout << "present hai bhaiya " << endl;
    }
    else
    {
        cout << "ghar jao kuch nai hai yha " << endl;
    }

    return 0;
}