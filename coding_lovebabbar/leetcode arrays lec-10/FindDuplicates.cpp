#include <iostream>
using namespace std;

int Duplicate(int arr[], int size){
    int ans = 0;
    // XOR all elements in the array
    for (int i = 0; i < size; i++){
        ans = ans ^ arr[i];
    }
    // XOR all numbers from 1 to size - 1
    for (int i = 1; i < size; i++){
        ans = ans ^ i;
    }
    return ans;
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

    int answer = Duplicate(arr, n);
    cout << "answer is " << answer << endl;

    return 0;
}
