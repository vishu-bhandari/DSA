#include <iostream>
using namespace std;

int getMax(int num[], int n)
{
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxi=max(maxi,num[i]);
        if (num[i] > maxi)
        {
            maxi = num[i];
        }
    }
    // returning max value
    return maxi;
}

int getMin(int num[], int n)
{
    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }
    // returning min value
    return min;
}

//ye loop 1 se n tk chelga aur upar wala bhi 1 se n tk chlega loop
//toh Time Complexity is 0(n)

int main()
{

    int size;
    cout << "enter the size" << endl;
    cin >> size;

    int num[100];

    // taking input in array
    cout << "enter the values" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> num[i];
    }

    cout << "Max value is: " << getMax(num, size) << endl
         << " Min value is:  " << getMin(num, size) << endl;

    return 0;
}