#include <iostream>
using namespace std;

bool isValid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

string Reverse(string a)
{
    int s = 0;
    int e = a.length() - 1;

    while (s < e)
    {

        swap(a[s], a[e]);
        s++;
        e--;
    }
    return a;
}

int main()
{

    cout << "enter the string " << endl;
    string s;
    getline(cin, s);

    cout << "The string you have enterd is " << endl;
    cout << s<<endl;

    string result = "";
    string temp = "";

    for (int j = 0; j < s.length(); j++)
    {

        if (isValid(s[j]))
        {
            temp.push_back(s[j]);
            continue;
        }
        else
        if(!temp.empty()){
            result+= Reverse(temp);
            temp="";
        }
        result.push_back(s[j]);
    }

    if(!temp.empty()){
        result+=Reverse(temp);
    }

    cout<<"the modified string is "<<endl;
    cout<<result<<endl;

    return 0;
}