// 2. two numbers given ,
//   a & b so we haveto give the total number of set bits
//    in a and b , a=2-> 10 b=3-> 11 toh ans =3.

#include <iostream>
using namespace std;
#include <cmath>

int binary(int n)
{
    int count = 0;
    while (n != 0)
    {
        if ((n & 1) == 1)
        {
            count += 1;
        }
        n = n >> 1;
    }
    return count;
}

int main()
{

    int a, b;

    cout << "enter the value of a" << endl;
    cin >> a;

    cout << "enter the value of b" << endl;
    cin >> b;

    int a1 = binary(a);
    int b1 = binary(b);

    cout << "the answer is " << a1 + b1 << endl;

    return 0;
}