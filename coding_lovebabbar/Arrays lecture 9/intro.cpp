#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing the array function" << endl;
}

int main()
{

    // declaration
    int dost[10];

    // initialisation

    int number[3] = {5, 7, 11};
    cout << endl
         << "value at 2nd index " << number[2];

    int second[3] = {5, 7, 11};
    cout << "value at 2nd index is " << second[2] << endl;

    int third[15] = {2, 7};
    // prin the array

    int fourth[10] = {0};

    // array with functions
    int n = 15;
    // printArray(third,15);

    int fourthSize = sizeof(fourth) / sizeof(int);
    cout << "fourth Size is " << fourthSize << endl;

    int thirdSize = sizeof(third) / sizeof(int);
    cout << "third Size is " << thirdSize << endl;

    cout << endl;
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing the array function" << endl;

    cout << endl
         << endl
         << "Everything is fine" << endl
         << endl;

    return 0;
}