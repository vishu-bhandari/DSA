

//do it again not complete ,stuck 


#include <iostream>
using namespace std;

string replaceSpaces(string str)
{
    int n = str.length();

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (str[i] == ' ')
        {
            count++;
        }
    }

    int new_length = n + (2 * count);
    str.resize(new_length);
    int e = new_length - 1;
    for (int i = e; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            str.push_back('@');
            str.push_back('4');
            str.push_back('0');
        }
        else
        {
            str.push_back(str[i]);
        }
    }

    return str;
}

int main()
{

    string s;
    cout << "input the string" << endl;
    getline(cin, s);
    cout << "the string you entered is" << s << endl
         << endl;


    cout << replaceSpaces(s);
}