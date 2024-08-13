// Given an integer n, return true if it is a power of two. Otherwise, return false.

#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "enter the value of n" << endl;
    cin >> n;
    int ans = 1;
    if(n==0){
        cout<<"yes number is in the power of 2"<<endl;
    }
    for (int i = 1; i <= 31; i++)
    {
        ans *= 2;
        if (ans == n)
        {
            cout << "yes the number is in the power of 2"<<endl;;
            return 0;
        }
    }

    cout << "no the number is not in the power of 2"<<endl;

    return 0;
}