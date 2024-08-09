#include <iostream>
using namespace std;

int main()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "hello" << endl;
        cout << "hy" << endl;
        break;
        cout << "reply to krde bhai ";
    }

    for (int j = 1; j <= 10; j++)
    {
        if (j == 6)
        {

            continue;
        }
        cout << j << endl;
    }
}

// continue ke neeche wla part unreachable ho gya