#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {23, 122, 41, 67};

    cout << "address of first memory block is " << arr << endl;
    cout << arr[0] << endl;
    ;
    cout << "address of first memory block is " << &arr[0] << endl;

    cout << "4th " << *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << (*arr) + 1 << endl;
    cout << "8th " << *(arr + 2) << endl;
    cout << "9th " << &(arr) << endl;

    int i = 3;
    cout << i[arr] << endl;

    int temp[10] = {1, 2};
    cout << sizeof(temp) << endl;

    int *ptr = &temp[0];
    cout << sizeof(ptr) << endl;
    cout << sizeof(*ptr) << endl;
    cout << sizeof(&ptr) << endl;
    cout << sizeof(*temp) << endl;
    cout << sizeof(&temp) << endl;

    cout << endl
         << endl;

    int a[20] = {1, 2, 3, 4, 5};
    cout << &a[0] << endl;
    cout << a << endl;
    cout << &a << endl;

    int *p = &a[0];
    cout << p << endl;
    cout << *p << endl;
    cout << &p << endl;

    cout << endl
         << endl;

    int arr1[10];
    // error
    // arr1=arr1+1;

    int *ptr1 = &arr1[0];
    cout<<ptr1<<endl;
    ptr1 = ptr1 + 1;
    // ye ab second block ko refer kr ra hai 
    cout << ptr1 << endl;

    cout<<endl<<endl;
    


    return 0;
}