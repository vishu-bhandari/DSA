#include <iostream>
using namespace std;
#include <stack>

int main()
{

    string str = "{{[()]}}";

    stack<char> s;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        // if opening bracket toh stack mai push

        // if closing bracket check the stack top and then pop

        if (ch == '(' || ch == '{' || ch == '[')
        {
            s.push(ch);
        }

        else
        {
            if (!s.empty())
            {
                // for closing bracket
                char top = s.top();
                if (ch == ')' && top == '(' || ch == '}' && top == '{' || ch == ']' && top == '[')
                {
                    s.pop();
                }
                else
                {
                    cout << "false";
                    return 0;
                }
            }
            else
            {
                cout << "false";
                return 0;
            }
        }
    }
    if (s.empty())
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}