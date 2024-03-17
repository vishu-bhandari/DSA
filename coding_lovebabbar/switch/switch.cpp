#include <iostream>
using namespace std;

int main()
{
    char ch = 'a';
    cout << endl;
    switch (ch)
    {
    case 1:
        cout << "first" << endl;
        break;
    case '1':
        cout << "character one " << endl;
        break;
    case 'a':
        cout << "character a" << endl;
        break;
    case 2:
        cout << "this is a number" << endl;
        break;
    default:
        cout << "it is a default case " << endl;
    }
    cout << endl;
}