#include <iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
         mid = start + (end - start) / 2;
    }
    return ans;
}
int lastOcc(int arr[], int n, int key)
{
    int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
         mid = start + (end - start) / 2;
    }
    return ans;
}

int main()
{
    int even[9] = {1, 2, 3, 3, 3, 3 , 3 ,3 , 4};

    cout<<"first occ of 3 is "<<firstOcc(even,9,3);
    cout<<endl;
    cout<<"last occ of 3 is "<<lastOcc(even,9,3);

    return 0;
}