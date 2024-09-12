#include <iostream>
using namespace std;

bool checkPalindrome(string &str, int i, int j)
{

    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;
    else
    {
        return checkPalindrome(str, i + 1, j - 1);
    }
}

int main()
{

    string name = "noon";
    cout << endl;

    bool isPalindrome = checkPalindrome(name, 0, name.length() - 1);

    if (isPalindrome)
    {
        cout << "badiya hai bhaiyaaa" << endl;
    }
    else
    {
        cout << "areee nahi  hai palin ka drome bhaiyaa" << endl<<endl;
    }

    return 0;
}