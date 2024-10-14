#include <iostream>
using namespace std;
#include <stack>

int main()
{

    string s = "vishu";

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }

    string ans = "";

    while (!st.empty())
    {
        ans.push_back(st.top());
        st.pop();
    }

    cout << ans;

    return 0;
}