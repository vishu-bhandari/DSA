#include <iostream>
using namespace std;

bool UniqueNum(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
       for(int j=0;j<size;j++){
        if(arr[i]^arr[j]==0){
            count++;
        }
       }
       if(count ==1){
        return 1;
       }
    }
    return 0;
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