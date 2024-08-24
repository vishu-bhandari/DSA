#include <iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int PageSum = 0;
    int StudentCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (PageSum + arr[i] <= mid)
        {
            PageSum += arr[i];
        }
        else
        {
            StudentCount++;
            if (StudentCount > m || arr[i] > mid)
            {
                return false;
            }
            PageSum = arr[i];
        }
    }
    return true;
}

int FindPages(int arr[], int n, int m)
{
    int s = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    int e = sum;
    int mid = s + (e - s) / 2;
    int ans = -1;
    if (n < m)
    {
        return -1;
    }

    while (s <= e)
    {
        if (isPossible(arr, n, m, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main()
{

    int arr[100];
    int n;
    cout << "enter the number of books" << endl;
    cin >> n;

    int m;
    cout << "enter the number of students" << endl;
    cin >> m;

    int size;
    cout << "enter the size of the array" << endl;
    cin >> size;

    cout << "enter the array " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int answer = FindPages(arr, n, m);
    cout << "the answer is " << answer << endl;

    return 0;
}