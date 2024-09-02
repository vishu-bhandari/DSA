#include <iostream>
using namespace std;

int main()
{

    char name[20];
    cout << "enter your name" << endl;
    cin >> name;

    cout << "your name is " << endl;
    cout << name;

    cout << endl;

    cout << "your half name is " << endl;
    name[2] = '\0';
    cout << name;

    return 0;
}