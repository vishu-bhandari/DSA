#include <iostream>
using namespace std;

string RemoveOcc(string str, string part)
{
    while (str.length() != 0 && str.find(part)< str.length()){
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main()
{

    string s;
    cout << "enter the string " << endl;

    getline(cin, s);

    cout << "enter the part of the string" << endl;
    string part;
    cin >> part;

    cout << RemoveOcc(s, part);

    return 0;
}