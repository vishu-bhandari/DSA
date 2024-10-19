#include <iostream>
using namespace std;
#include <stack>



int main()
{

    string s = "(a+(b*c))";

    stack<char> st;

    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        if (ch == '(' || ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // ch ya toh ')' hai or lowercase letter hai
            if (ch == ')')
            {

                bool isRedundant = true;
                // checking in between koi opening bracket hai ya nahi
                while (st.top() != '(')
                {
                    char top = st.top();

                    if (top == '+' || top == '-' || top == '*' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant == true)
                {
                     cout<<"redundant"<<endl;
                }
                st.pop();
            }
        }
    }
    cout<<"no not redundant"<<endl;

    return 0;
}