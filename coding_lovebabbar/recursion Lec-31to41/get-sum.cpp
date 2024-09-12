#include <iostream>
using namespace std;

int isSum(int *arr, int n)
{

    if (n == 0)
    {
        return 0;
    }

    int sum=arr[0];

    sum=sum+isSum(arr+1,n-1);
    return sum;

    


}

int main()
{

    int arr[100];
    int n;
    cout << "enter the szie " << endl;
    cin >> n;
    cout << "enter the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "your array is " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int ans = isSum(arr, n);

    cout << ans << endl;

    return 0;
}