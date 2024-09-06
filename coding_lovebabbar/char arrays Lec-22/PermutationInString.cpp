#include <iostream>
using namespace std;

bool checkEqual(int arr1[26], int count2[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (arr1[i] != count2[i])
        {
            return 0;
        }
    }
    return 1;
}

bool Permutation(string s1, string s2)
{
    // count the s1 string

    int arr1[26] = {0};

    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        arr1[index]++;
    }

    // traversing s2 string in window size of s1

    int windowSize = s1.length();
    int count2[26] = {0};
    int i = 0;

    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count2[index]++;
        i++;
    }

    if (checkEqual(arr1, count2))
    {
        return 1;
    }

    // aage ka window process
    while (i < s2.length())
    {

        char newChar = s2[i];
        int index = newChar - 'a';
        count2[index]++;
        char oldChar = s2[i - windowSize];
        index = oldChar - 'a';
        count2[index]--;

        if (checkEqual(arr1, count2))
        {
            return 1;
        }
        i++;
       
    }
    return 0;
}

int main()
{

    string s1;
    cout << "enter the input string" << endl;
    cin >> s1;

    string s2;
    cout << "enter the input string" << endl;
    cin >> s2;

    if (Permutation(s1, s2))
    {
        cout << "yiipie kie yaay" << endl;
    }
    else
    {
        cout << "dang it " << endl;
    }

    return 0;
}