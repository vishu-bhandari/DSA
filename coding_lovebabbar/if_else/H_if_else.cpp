// print if the character is small case , uppercase or numbers

#include <iostream>
using namespace std;

int main()
{

    char ch;
    cout << "Enter the value of ch: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z')
    {
        cout << "This is Lowercase " << endl;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        cout << "this is uppercase" << endl;
    }
    else
    {
        cout << "ch is a number" << endl;
    }

    return 0;
}