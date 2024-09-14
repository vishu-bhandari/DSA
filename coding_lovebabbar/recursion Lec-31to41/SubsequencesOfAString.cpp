#include <iostream>
using namespace std;
#include <vector>
#include <string>

void solve(string &str, string output, int index, vector<string> &ans)
{

    // base case
    if (index == str.length())
    {
        if (output.length() >= 0)
        {
            ans.push_back(output);
        }
        return;
    }

    // exclude
    solve(str, output, index + 1, ans);

    // include
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

int main()
{

    string str = "abc";

    vector<string> ans;

    string output = "";
    int index = 0;

    solve(str, output, index, ans);

    for (const string &i : ans)
    {
        cout << "\"" << i << "\" ";
    }

    return 0;
}