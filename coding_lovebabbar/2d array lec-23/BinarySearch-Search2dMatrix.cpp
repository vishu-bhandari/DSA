#include <iostream>
using namespace std;

bool Search(int arr[][3], int nrow, int mcol, int key)
{

    int s = 0;
    int e = mcol*nrow - 1;

    int mid = s + (e - s) / 2;

    while (s <= e)
    {
        int element=arr[mid/mcol][mid%mcol];

        if (element==key)
        {
            return 1;
        }
        else if (element < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return 0;
}

int main()
{

    int arr[3][3];

    cout << "enter the elements" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;
    int key;
    cout << "enter the element to search" << endl;
    cin >> key;

    bool answer = Search(arr, 3, 3, key);

    if (answer)
    {
        cout << "yiipie kie yaya" << endl;
    }
    else
    {
        cout << "dang it " << endl;
    }

    return 0;
}