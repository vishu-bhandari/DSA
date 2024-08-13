#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "enter the value of n" << endl;

    cin >> n;

    int m = n;
    int mask = 0;

    //Edge case 
    if (m == 0)
    {
        cout << "the answer is " << 1 << endl;
        return 0;
    }
    while (m != 0)
    {
        mask = mask << 1 | 1;
        m = m >> 1;
    }
    int ans = ~n & mask;
    cout << "the answer is " << ans << endl;

    return 0;
}