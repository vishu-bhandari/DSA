#include <iostream>
using namespace std;

bool UniqueNum(int arr[], int size)
{
   
}

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;

    int arr[100];
    cout << "enter the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << endl;

    int answer = UniqueNum(arr, n);
    cout << "answer is " << answer << endl;

   
    return 0;
}