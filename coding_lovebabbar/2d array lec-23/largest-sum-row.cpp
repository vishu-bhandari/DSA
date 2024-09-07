#include <iostream>
using namespace std;

int LargestRowSum(int arr[][3], int row, int col)
{

    int maxi = INT_MIN;
    int RowIndex=-1;
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
             sum += arr[i][j];
        }
        if(sum>maxi){

          
            maxi=sum;
            RowIndex=i;
        }
    }
   
    return RowIndex;
}

int main()
{

    int arr[3][3];

    cout << "enter the elements " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
    }
    cout << endl;

    cout<<"max row"<<endl;
  
    cout << LargestRowSum(arr, 3, 3) << endl;

    return 0;
}